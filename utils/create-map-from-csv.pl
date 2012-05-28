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

print STDERR "Dumping to binary file 'out.bin'";

# First, add flush code

for (my $i=0;$i<8;$i++) {
    my $cnt = $sizes[$i];
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
close $out;
