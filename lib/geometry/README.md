# `geometry` - Basic geometry data structures and services

* [Points and Lines](#Points-and-Lines)
* [Boxes and detection collision](#Boxes-and-detection-collision)
* [`Box`](#`Box`)
* [`Box3d`](#`Box3d`)
* [`BoxedArray`](#`BoxedArray`)
* [`quadtree`](#`quadtree`)
* [`SQuadTree`](#`SQuadTree`)
* [`DQuadTree`](#`DQuadTree`)
* [Polygons](#Polygons)
* [Authors](#Authors)

## Points and Lines

![Diagram for `geometry`](uml-geometry.svg)

The very basics of geometry needs, for two and three-dimensional space.

## Boxes and detection collision

Boxes module introduces Bounding boxes for Points and Lines and services to detect collision or inclusion between boxes.
It means a simple and fast way to test collision but not really accurate since it uses bounding boxes.

### `Box`

> This class offers many constructors specialized for different usage. They are
> named according to the order of their arguments.

### `Box3d`

> This class offers many constructors specialized for different usage. They are
> named according to the order of their arguments.

### `BoxedArray`

> Linear performances for searching, but really fast creation and filling.

## `quadtree`

> The QuadTree data structure partition a 2D space by recursively
> subdividing it into 4 regions when its capacity is reached.
> This module introduces 2 main implementation of the structure,
> a static and a dynamic QuadTree.

A QuadTree is a tree data structure in which each internal node has exactly four children
They're most often used to partition two-dimensional space by recursively subdividing
it into four quadrants or regions.

* They decompose space into adaptable cells
* Each cell has a maximum capacity. When maximum is reached, the cell splits.

Quadtrees are using Boxed objects to determine their distribution in the 2D space.

This API provides two different types of Quadtree : Static and Dynamic (respectively `SQuadTree` and `DQuadTree`).

* Static: When you create the QuadTree, you need to specify the region that it will cover

* Dynamic: You just need to fill the quadtree with objects, and when the threshold is reached,
  it will automatically divide the current region, depending on the distribution of objects already in the region.

### `SQuadTree`

> You need to specify a zone when creating the quadtree,
> which will be the zone corresponding to the root node.
> Each subdivision cut the space in 4 equal regions from
> the center of the parent node.

### `DQuadTree`

> The center of the parent node is determined by the average
> values of the data it contains when `item_limit` is reached.

## Polygons

Some basic polygon services.

This module contains interesting algorithms for `ConvexPolygon`only at the moment. A Convex polygon can be defined as follow :

* All its interior angles are less than 180°. this means that all the vertices of the polygon
  will point outwards, away from the interior of the shape.

* Every point on every line segment between two points inside or on the boundary of the polygon
  remains inside or on the boundary.

* The polygon is entirely contained in a closed half-plane defined by each of its edges.

* For each edge, the interior points are all on the same side of the line that the edge defines.

* The angle at each vertex contains all other vertices in its edges and interior.

A polygon which is not convex is called concave. Convex polygon are used because most
geometric problems are simpler and faster on convex objects than on non-convex ones.

Services provided :

* Point in convex polygon
* Intersection of convex polygon
* Convex hull of a set of points
* Triangulation of polygon

## Authors

This project is maintained by **Romain Chanoir <mailto:romain.chanoir@viacesi.fr>**.
