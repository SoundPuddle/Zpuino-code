#!/usr/bin/perl
use strict;
my @controllers;
my @sizes;

my $max=0;
my $min=9999999;

my $numctrl;

while (<STDIN>) {
    chomp;
    my @values = split(/[,\s]/);
    
    $numctrl||=scalar(@values);
    
    for (my $i=0;$i<$numctrl;$i++) {
        my $val = shift @values;
        next unless $val=~/[0-9]+/;
        push(@{$controllers[$i]},$val+1); # Need to add offset
        $min=$val if $val<$min;
        $max=$val if $val>$max;
    }
}
print STDERR "Controller (we have $numctrl) dump: \n";
my $total=0;
for (my $i=0;$i<$numctrl;$i++) {
    my $cnt = scalar(@{$controllers[$i]});
    print STDERR $i, ": ", $cnt, " leds\n";
    @sizes[$i] = $cnt;
    $total+=$cnt;
}

print STDERR "\nTotal leds: $total\n";
print STDERR "FFT range $min to $max\n";

print STDERR "Dumping to binary file 'out.bin'\n";

# First, add flush code
# ((n + 63) / 64) * 3

for (my $i=0;$i<$numctrl;$i++) {
    my $cnt = $sizes[$i];
    
    $cnt+=63;
    $cnt = int(($cnt/64));
    #print STDERR "Flush for channel $i: $cnt\n";
    while ($cnt) {
        push(@{$controllers[$i]},0);
        $cnt--;
    }
}


open(my $out, '>', "out.bin");
open( my $outc, '>', "mapping.cpp" );

print $outc "unsigned int ledmapping[] = { \n";

for(;;) {
    my $found=undef;
    for (my $i=0;$i<$numctrl;$i++) {
        my $v = shift(@{$controllers[$i]});
        if (defined $v) {
            $found=1;
            my $offset = $v*4;
            print $out pack("Cn",$i,$offset);
            printf $outc "\t0x%08x,\n", $offset + ($i<<16);
            #printf "CH $i 0x%08x\n", $offset;
        }
    }
    last unless $found;
};

print STDERR "Writing direct mapping at ", tell $out, "\n";
my $offdirectmap = tell($out)/3;

for (my $i=0;$i<$numctrl;$i++) {
    my $items=0;
    my $cnt = $sizes[$i];
    my $off=4;
    while ($cnt) {
            print $out pack("Cn",$i,$off);
            printf $outc "\t0x%08x,\n", $off + ($i<<16);
            
        $off+=4;
        $cnt--;
        $items++;
    }
    # Write flush code
    
    $cnt = $sizes[$i];

    $cnt+=63;
    $cnt = int(($cnt/64));

    while ($cnt) {
            print $out pack("Cn",$i,0);
            printf $outc "\t0x%08x,\n", ($i<<16);
            
        $items++;
        $cnt--;
    }
    print STDERR "End controller $i at ",tell($out)," ($items items)\n";
}

print STDERR "Writing flush code at ", tell $out, "\n";
my $flushsize=0;
my $flushoff_words= tell($out)/3;

for (my $i=0;$i<$numctrl;$i++) {
    my $cnt = $sizes[$i];

    $cnt+=63;
    $cnt = int(($cnt/64));

    while ($cnt) {
            print $out pack("Cn",$i,0);
            printf $outc "\t0x%08x,\n", 0 + ($i<<16);
            $flushsize++;
            $cnt--;
    }
}
print $outc "};\n";

print STDERR "End at ", tell $out, "\n";

close $outc;
open($outc, '>', "mapping.h");
print $outc "#ifndef __MAPPING_H__\n";
print $outc "#define __MAPPING_H__\n";
print $outc "extern unsigned int ledmapping[]; \n";
print $outc "#define FLUSH_OFFSET $flushoff_words /* In words */\n";
print $outc "#define FLUSH_SIZE $flushsize /* In words */\n";
print $outc "#define DIRECTMAP_OFFSET $offdirectmap /* In words */ \n" ;
print $outc "#define NUMLEDS $total \n" ;
print $outc "#endif\n" ;
close $out;
