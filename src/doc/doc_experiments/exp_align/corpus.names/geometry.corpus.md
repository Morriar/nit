# Basic geometry data structures and services

> name: geometry

## Points and Lines

> name: geometry::Point
> name: geometry::Line

The very basics of geometry needs, for two and three-dimensional space.

> name: geometry

## Boxes and detection collision

> name: geometry::boxes
> name: geometry::Box

Boxes module introduces Bounding boxes for Points and Lines and services to detect collision or inclusion between boxes.
It means a simple and fast way to test collision but not really accurate since it uses bounding boxes.

> name: geometry::boxes
> name: geometry::Box
> name: geometry::Point
> name: geometry::Line
> name: geometry::Box

## Quadtrees

> name: geometry::quadtree
> name: geometry::QuadTree

A QuadTree is a tree data structure in which each internal node has exactly four children
They're most often used to partition two-dimensional space by recursively subdividing
it into four quadrants or regions.

> name: geometry::quadtree
> name: geometry::QuadTree
> name: geometry::QuadTree::children

* They decompose space into adaptable cells
* Each cell has a maximum capacity. When maximum is reached, the cell splits.

Quadtrees are using Boxed objects to determine their distribution in the 2D space.

> name: geometry::QuadTree
> name: geometry::Boxed

This API provides two different types of Quadtree : Static and Dynamic (respectively `SQuadTree` and `DQuadTree`).

> name: geometry::quadtree

* Static: When you create the QuadTree, you need to specify the region that it will cover

* Dynamic: You just need to fill the quadtree with objects, and when the threshold is reached,
  it will automatically divide the current region, depending on the distribution of objects already in the region.

> name: geometry::quadtree
> name: geometry::QuadTree
> name: geometry::quadtree

## Polygons

> name: geometry::Polygon

Some basic polygon services.

> name: geometry::Polygon

This module contains interesting algorithms for `ConvexPolygon`only at the moment. A Convex polygon can be defined as follow :

> name: geometry::Polygon

* All its interior angles are less than 180°. this means that all the vertices of the polygon
  will point outwards, away from the interior of the shape.

* Every point on every line segment between two points inside or on the boundary of the polygon
  remains inside or on the boundary.

* The polygon is entirely contained in a closed half-plane defined by each of its edges.

* For each edge, the interior points are all on the same side of the line that the edge defines.

* The angle at each vertex contains all other vertices in its edges and interior.

> name: geometry::angles
> name: geometry::polygon::APolygon::vertices
> name: geometry::polygon
> name: geometry::Point
> name: geometry::Point
> name: geometry::Line
> name: geometry::Point
> name: geometry::Polygon
> name: geometry::Point
> name: geometry::Line

A polygon which is not convex is called concave. Convex polygon are used because most
geometric problems are simpler and faster on convex objects than on non-convex ones.

> name: geometry::Polygon
> name: geometry::Polygon

Services provided :

* Point in convex polygon
* Intersection of convex polygon
* Convex hull of a set of points
* Triangulation of polygon

> name: geometry::Point
> name: geometry::Polygon
> name: geometry::Polygon
> name: geometry::Point
> name: geometry::Polygon