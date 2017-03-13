#!/usr/bin/env ruby

$x = 600851475143
$i = 2
$factor = 0

while $x > 1
    if $x % $i == 0
        $x = $x / $i
        if $i > $factor
            $factor = $i
        end
    end
    $i += 1
end

puts $i
