# `rubix` - Rubix-cube modelization library

* [Features](#Features)
* [`RubixCube` - In-memory representation of a Rubix Cube](#`RubixCube`---In-memory-representation-of-a-Rubix-Cube)
* [Authors](#Authors)

As for now the library supports basic representation of a Rubix-cube
The library is built for speed, most operations cost no allocations to perform.
This does however mean that the library is NOT thread-safe and should be handled
with the appropriate mutual-exclusion mechanisms to avoid memory corruption
or unintended side-effects on a single cube.

The library supports the singmaster notation as a way to perform operations
on a Rubix cube.

No solver is (yet) provided along with the library.

## Features

### `RubixCube` - In-memory representation of a Rubix Cube

Faces are represented in memory as if they were a flattened cube like:

~~~raw
      B B B
      B B B
      B B B
      U U U
      U U U
      U U U
L L L F F F R R R
L L L F F F R R R
L L L F F F R R R
      D D D
      D D D
      D D D
~~~

All the commands detailed in the class respect the Singmaster notation

Properties:

* `RubixCube::cclock_B` - B' command
* `RubixCube::cclock_D` - D' command
* `RubixCube::cclock_E` - E' command
* `RubixCube::cclock_F` - F' command
* `RubixCube::cclock_L` - L' command
* `RubixCube::cclock_M` - M' command
* `RubixCube::cclock_R` - R' command
* `RubixCube::cclock_S` - S' command
* `RubixCube::cclock_U` - U' command
* `RubixCube::cclock_b` - b' command
* `RubixCube::cclock_d` - d' command
* `RubixCube::cclock_f` - f' command
* `RubixCube::cclock_l` - l' command
* `RubixCube::cclock_r` - r' command
* `RubixCube::cclock_u` - u' command
* `RubixCube::ccube_X_rotation` - X' command
* `RubixCube::ccube_Y_rotation` - Y' command
* `RubixCube::ccube_Z_rotation` - Z' command
* `RubixCube::clock_B` - B command
* `RubixCube::clock_D` - D command
* `RubixCube::clock_E` - E command
* `RubixCube::clock_F` - F command
* `RubixCube::clock_L` - L command
* `RubixCube::clock_M` - M command
* `RubixCube::clock_R` - R command
* `RubixCube::clock_S` - S command
* `RubixCube::clock_U` - U command
* `RubixCube::clock_b` - b command
* `RubixCube::clock_d` - d command
* `RubixCube::clock_f` - f command
* `RubixCube::clock_l` - l command
* `RubixCube::clock_r` - r command
* `RubixCube::clock_u` - u command
* `RubixCube::cube_X_rotation` - X command
* `RubixCube::cube_Y_rotation` - Y command
* `RubixCube::cube_Z_rotation` - Z command
* `RubixCube::do_cmd` - Applies a command `cmd` to `self`, returns the number of operations performed during the command
* `RubixCube::is_solved` - Is `self` a solved Rubix Cube ?
* `RubixCube::reset` - Reset the Rubix Cube to a solved position
* `RubixCube::scrambled` - Build a new Rubix Cube with a scrambled layout
* `RubixCube::solved` - Build a new Rubix Cube with a solved layout

## Authors

This project is maintained by **Lucas Bajolet<mailto:r4pass@hotmail.com>**.
