# `geometry` - Basic geometry data structures and services

* [Features](#Features)
* [`quadtree` - QuadTree API mostly used for 2 dimensional collision detection](#`quadtree`---QuadTree-API-mostly-used-for-2-dimensional-collision-detection)
* [Other features](#Other-features)
* [Authors](#Authors)

## Features

![Diagram for `geometry`](uml-geometry.svg)

### `quadtree` - QuadTree API mostly used for 2 dimensional collision detection

The QuadTree data structure partition a 2D space by recursively
subdividing it into 4 regions when its capacity is reached.
This module introduces 2 main implementation of the structure,
a static and a dynamic QuadTree.

## Other features

* `angles` - Angle related service using `Float` to represent an angle in radians
* `boxes` - Provides interfaces and classes to represent basic geometry needs.
* `points_and_lines` - Interfaces and classes to represent basic geometry needs.
* `polygon` - Convex Polygons manipulations

## Authors

This project is maintained by **Romain Chanoir <mailto:romain.chanoir@viacesi.fr>**.
