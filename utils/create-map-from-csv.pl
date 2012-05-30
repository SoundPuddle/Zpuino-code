#!/usr/bin/perl
use strict;
my @controllers;
my @sizes;

my $max=0;
my $min=9999999;

while (<STDIN>) {
    chomp;
    my @values = split(',');
    for (my $i=0;$i<8;$i++) {
        my $val = shift @values;
        next unless $val=~/[0-9]+/;
        push(@{$controllers[$i]},$val);
        $min=$val if $val<$min;
        $max=$val if $val>$max;
    }
}
print STDERR "Controller dump: \n";
my $total=0;
for (my $i=0;$i<8;$i++) {
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

for (my $i=0;$i<8;$i++) {
    my $cnt = $sizes[$i];
    
    $cnt+=63;
    $cnt = int(($cnt/64));
    
    while ($cnt) {
        push(@{$controllers[$i]},0);
        $cnt--;
    }
}


open(my $out, '>', "out.bin");

for(;;) {
    my $found=undef;
    for (my $i=0;$i<8;$i++) {
        my $v = shift(@{$controllers[$i]});
        if (defined $v) {
            $found=1;
            my $offset = $v*4;
            print $out pack("Cn",$i,$offset);
        }
    }
    last unless $found;
};

print STDERR "Writing direct mapping at ", tell $out, "\n";

for (my $i=0;$i<8;$i++) {
    my $items=0;
    my $cnt = $sizes[$i];
    my $off=4;
    while ($cnt) {
        print $out pack("Cn",$i,$off);
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
        $items++;
        $cnt--;
    }
    print STDERR "End controller $i at ",tell($out)," ($items items)\n";
}

print STDERR "Writing flush code at ", tell $out, "\n";

for (my $i=0;$i<8;$i++) {
    my $cnt = $sizes[$i];

    $cnt+=63;
    $cnt = int(($cnt/64));

    while ($cnt) {
        print $out pack("Cn",$i,0);
        $cnt--;
    }
}

print STDERR "End at ", tell $out, "\n";

close $out;
