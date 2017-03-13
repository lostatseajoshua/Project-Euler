#!/usr/bin/env ruby

$sum = 0
$x = 1
$y = 2

while $x < 4000000
    if $x % 2 == 0
        $sum += $x
    end
    $z = $x + $y
    $x = $y
    $y = $z
end

puts $sum
