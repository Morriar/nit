# Conversion functions between RGB and other color systems.
# This modules provides two functions for each color system ABC:
# rgb_to_abc(r, g, b) --> a, b, c
# abc_to_rgb(a, b, c) --> r, g, b
# All inputs and outputs are triples of floats in the range [0.0...1.0]
# (with the exception of I and Q, which covers a slightly larger range).
# Inputs outside the valid range may cause exceptions or invalid outputs.
# Supported color systems:
# RGB: Red, Green, Blue components
# YIQ: Luminance, Chrominance (used by composite video signals)
# HLS: Hue, Luminance, Saturation
# HSV: Hue, Saturation, Value
module colorsys

import builtins

redef class Sys
    
end

