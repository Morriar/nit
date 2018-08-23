# Basic geometry data structures and services

> match: geometry

## Points and Lines

> match: geometry::points_and_lines
> match: geometry::Point
> match: geometry::Line

The very basics of geometry needs, for two and three-dimensional space.

> match: geometry

## Boxes and detection collision

> match: geometry::boxes
> match: geometry::Box

Boxes module introduces Bounding boxes for Points and Lines and services to detect collision or inclusion between boxes.
It means a simple and fast way to test collision but not really accurate since it uses bounding boxes.

> match: geometry::boxes
> match: geometry::Box
> match: geometry::Point
> match: geometry::Line

## Quadtrees

> matches: geometry::quadtree

A QuadTree is a tree data structure in which each internal node has exactly four children
They're most often used to partition two-dimensional space by recursively subdividing
it into four quadrants or regions.

> match: geometry::QuadTree
> match: geometry::quadtree
> match: geometry::QuadTree::children
> match: geometry::QuadTree::data

* They decompose space into adaptable cells
* Each cell has a maximum capacity. When maximum is reached, the cell splits.

Quadtrees are using Boxed objects to determine their distribution in the 2D space.

> match: geometry::quadtree
> match: geometry::QuadTree
> match: geometry::Boxed

This API provides two different types of Quadtree : Static and Dynamic (respectively `SQuadTree` and `DQuadTree`).

> match: geometry::QuadTree
> match: geometry::SQuadTree
> match: geometry::DQuadTree
> match: geometry::quadtree

* Static: When you create the QuadTree, you need to specify the region that it will cover

* Dynamic: You just need to fill the quadtree with objects, and when the threshold is reached,
  it will automatically divide the current region, depending on the distribution of objects already in the region.

> match: geometry::quadtree
> match: geometry::QuadTree

## Polygons

> match: geometry::Polygon

Some basic polygon services.

> match: geometry::Polygon
> match: geometry::polygon

This module contains interesting algorithms for `ConvexPolygon`only at the moment. A Convex polygon can be defined as follow :

> match: geometry::Polygon
> match: geometry::ConvexPolygon
> match: geometry::polygon

* All its interior angles are less than 180°. this means that all the vertices of the polygon
  will point outwards, away from the interior of the shape.

* Every point on every line segment between two points inside or on the boundary of the polygon
  remains inside or on the boundary.

* The polygon is entirely contained in a closed half-plane defined by each of its edges.

* For each edge, the interior points are all on the same side of the line that the edge defines.

* The angle at each vertex contains all other vertices in its edges and interior.

> match: geometry::Polygon
> match: geometry::Point
> match: geometry::Line
> match: geometry::polygon
> match: geometry::APolygon::points
> match: geometry::angles

A polygon which is not convex is called concave. Convex polygon are used because most
geometric problems are simpler and faster on convex objects than on non-convex ones.

> match: geometry::Polygon
> match: geometry::polygon
> name: geometry::geometry

Services provided :

* Point in convex polygon
* Intersection of convex polygon
* Convex hull of a set of points
* Triangulation of polygon

> match: geometry::Polygon
> match: geometry::polygon
> match: geometry::Point
> match: geometry::APolygon::points
