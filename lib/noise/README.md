# `noise` - Noise generators `PerlinNoise` and `InterpolatedNoise`

* [Features](#Features)
* [`PerlinNoise` - 2D Perlin noise generator using layered `InterpolatedNoise`](#`PerlinNoise`---2D-Perlin-noise-generator-using-layered-`InterpolatedNoise`)
* [`InterpolatedNoise` - Simple interpolated noise](#`InterpolatedNoise`---Simple-interpolated-noise)
* [`ImprovedNoise` - Direct translation of Ken Perlin's improved noise Java implementation](#`ImprovedNoise`---Direct-translation-of-Ken-Perlin's-improved-noise-Java-implementation)
* [Other features](#Other-features)
* [Authors](#Authors)

## Features

### `PerlinNoise` - 2D Perlin noise generator using layered `InterpolatedNoise`

Get values at any coordinates with `[]`.
The behavior of this generator can be customized using its attributes `min`,
`max`, `period` and `seed`.

This noise is more realistic and less smooth than the `InterpolatedNoise`.

Due to implementation logic, the full amplitude cannot be reached.
In practice, only `amplitude * (1.0 - 1.0 / n_levels)` is covered.

This implementation uses a custom deterministic pseudo random number
generator to set `InterpolatedNoise::seed` of the `layers`.
It is seeded with the local `seed` and can be further customized by
redefining `pseudo_random`.
This process do not require any state, so this class only holds the
attributes of the generator and does not keep any generated data.

## Usage example

~~~
var map = new PerlinNoise
map.min = 0.0
map.max = 16.0
map.period = 20.0
map.seed = 0

var max = 0.0
var min = 100.0
for y in 30.times do
    for x in 70.times do
        # Get a value at x, y
        var val = map[x.to_f, y.to_f]
        printn val.to_i.to_hex

        max = max.max(val)
        min = min.min(val)
    end
    print ""
end
assert max <= map.max
assert min >= map.min
~~~

## Result at seed == 0

~~~raw
76666555444322234567789abbcbbaabbaa98777766665665566667888987655444444
776665554443322234567789abbbbbbbbba98777766666665556666788998654444444
777766544443322234566789abbbbbbbbaa99877777776665556666788888655444444
777776444443322244556679abbbccbbbaa99877777776655556666688888655444444
777766444444332244555678abbbccbbbaa99887787877655556666678888654444444
8887654344443333444456789abcccbbaa999877888886555555666688777654444455
8887654344443333444456789abbcdcbaa999887889887655555566677777654444456
7876654434444444444456778abbcccaaa999888899888655555566677777654444556
78765544344445544444567789bbccca99999888899988765555566666667654445566
77765444344455554445567889bbccba99999998999988765555566555666654445667
7765444334555665445556788abbbba988998999999988765555566545556554456677
87654444334556655455567899bbbba998888899999887766555566544556555456777
87655444334566665555567899bbbbba98888899988888776555566544556555556777
97655544334566665555567899abbbba98888899988888776555655544456555667777
97655544444566665556667899aaaaba98888999877777776555555444456666667777
866555444456666666566789999aaaaa98889998877777766556544443456667777777
976555445556776666666789aa99aaaa98889998876777666555544444456677887777
9765554556667777776667899999aaaa98889988876676666555443444446678888888
87655555666777788766678999899aaa99889988776666666554433344446789998888
876555566777788888766889998899a999889987776666666543333334456899a99899
766556677877889998877888888889a99998888777666666653222233345799aaa999a
6665556777777899998878988888899999999887777656666543222233446899aa999a
6655456777777899999888988888889999a988887776566666532222233457899a999a
665555677777789999998998888878899aa9888887765666655322222234578899aa9a
665555677777789999a98888888877899aa9888887766666655322222234467899aa9a
65666677667778999aaa988878877789aaa9888887776676654322222344467889aa9a
55566677767788899aaa987777777789aaa9888887776666654322222344567889aaa9
5566767777788889aaaa987777777789aaaa988887777666555432122344556899aaa9
5567777777788889aaaa977777777789aaaa99888777766555543212234555689aaaaa
5667877777889989aaa9876677777889aaaa99888777765554443212334555689aaaaa
~~~

### `InterpolatedNoise` - Simple interpolated noise

Generates smoother noise than `PerlinNoise`.

Each coordinates at a multiple of `period` defines a random vector and
values in between are interpolated from these vectors.

This implementation uses a custom deterministic pseudo random number
generator seeded with `seed`.
It can be further customized by redefining `gradient_vector`.
This process do not require any state, so this class only holds the
attributes of the generator and does not keep any generated data.

## Usage example

~~~
var map = new InterpolatedNoise
map.min = 0.0
map.max = 16.0
map.period = 20.0
map.seed = 0

var max = 0.0
var min = 100.0
for y in 30.times do
    for x in 70.times do
        # Get a value at x, y
        var val = map[x.to_f, y.to_f]
        printn val.to_i.to_hex

        max = max.max(val)
        min = min.min(val)
    end
    print ""
end
assert max <= map.max
assert min >= map.min
~~~

## Result at seed == 0

~~~raw
89abcddeeeeeeeddcba9877666555555555666778766555544444555566789abcddeee
789abcddeeeeeeddccba887766655555555566677766555544444555566779abcddeee
689abcddeeeeeeeddcba988776655555555555667666555554455555566778abccdeee
678abccdeeeeeeeedccba988766655555555555666655555555555556666789abcddee
5789abcddeeeeeeeddcba998776655544444555666655555555555556666789abcddee
5689abcddeeeeeeeedccba98776655544444455566555555555555566666789abccdde
4679abccdeeeffeeeddcba98776655444444445565555555555555666666789abbcddd
4678abccdeeeffeeeedcba98876555444444444555555555566666666666689aabccdd
46789abcdeeeeffeeedccb988765544443344445555566666666666666666789abccdd
45789abcddeeeffeeeddcb987765544433334445555666666666666666666789abbccd
45789abcddeeeeeeeeddcb987665444333333445556666666777777777766789aabccc
45789abcddeeeeeeeeddca987655443333333445566666777777777777776789aabbcc
45789abcddeeeeeeeedcca9876544333333333455666777777788877777767899aabbc
46789abcddeeeeeeeddcba9876544333222333455667777888888888877767899aabbb
46789abcdddeeeeedddcba87655433222223334566777888889998888877778899aabb
5678aabcdddeeeedddccb987654332222222334566778889999999998887778899aaab
5689abbcddddeedddccba9865443222222223345677889999aaaa99998877788999aaa
6789abbcddddddddccbba8765432221111223345678899aaaaaaaaaa9988778889999a
6789abccdddddddccbba9865433221111122344577899aabbbbbbbaaa9987788889999
789abbccddddddccbba9876543211111111234567899aabbbccccbbbaa987788888899
889abbccdddddccbba9886543211000001123456889abbcccccccccbba988888888888
899abbcccddddcccbaa9875432211000011223457899abbcccccccccbba98888888888
899abbccccddccccbba9876533211000001123456789aabccccddcccbbaa9998888888
899abbccccccccccbbaa9765432111000011223456899abbcccdddcccbba9999988888
899abbbcccccccccbbaa9865432211000011123456789abbccdddddcccbba999988888
899aabbcccccccccbbaa9875433211100001122346789abbccddddddcccbaa99988888
899aabbbcccccccbbbbaa876543211100001122345689aabccdddddddccbaaa9988887
899aabbbbbbccbbbbbbaa876543221110001112335679aabccddddddddcbbaa9988877
899aaabbbbbbbbbbbbbaa9765433211111111123356789abccddddddddccbaa9988777
8999aaaabbbbbbbbbbaaa9765433221111111122356789abccdddeedddccbaa9988777
~~~

### `ImprovedNoise` - Direct translation of Ken Perlin's improved noise Java implementation

This implementation differs from `PerlinNoise` on two main points.
This noise is calculated for a 3D point, vs 2D in `PerlinNoise`.
`PerlinNoise` is based off a customizable seed, while this noise has a static data source.

Properties:

* `ImprovedNoise::noise` - Noise value in [-1..1] at 3D coordinates `x, y, z`

## Other features

* `Noise` - 2D noise generator

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
