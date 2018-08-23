# `geometry` - Basic geometry data structures and services

[[toc: geometry]]

[[features: geometry | mentities: geometry::geometry;geometry::angles;geometry::points_and_lines;geometry::boxes;geometry::quadtree;geometry::polygon]]

## Points and Lines

[[uml: geometry | format: svg, mentities: geometry::geometry;geometry::angles;geometry::points_and_lines;geometry::boxes;geometry::quadtree;geometry::polygon]]

The very basics of [[geometry]] needs, for two and three-dimensional space.

## Boxes and detection collision

[[geometry::Box | text: Boxes]] module introduces Bounding [[geometry::boxes]] for Points and Lines and services to detect collision or inclusion between boxes.
It means a simple and fast way to test collision but not really accurate since it uses bounding boxes.

### [[sign: geometry::Box]]

> [[doc: geometry::Box]]

### [[sign: geometry::Box3d]]

> [[doc: geometry::Box3d]]

### [[sign: geometry::BoxedArray]]

> [[doc: geometry::BoxedArray]]

## [[sign: geometry::quadtree]]

> [[doc: geometry::quadtree]]

A [[geometry::QuadTree]] is a tree data structure in which each internal node has exactly four children
They're most often used to partition two-dimensional space by recursively subdividing
it into four quadrants or regions.

* They decompose space into adaptable cells
* Each cell has a maximum capacity. When maximum is reached, the cell splits.

Quadtrees are using [[geometry::Boxed]] objects to determine their distribution in the 2D space.

This API provides two different types of Quadtree : Static and Dynamic (respectively [[geometry::SQuadTree | text: `SQuadTree`]] and [[geometry::DQuadTree | text: `DQuadTree`]]).

* Static: When you create the QuadTree, you need to specify the region that it will cover

* Dynamic: You just need to fill the quadtree with objects, and when the threshold is reached,
  it will automatically divide the current region, depending on the distribution of objects already in the region.

### [[sign: geometry::SQuadTree]]

> [[doc: geometry::SQuadTree]]

### [[sign: geometry::DQuadTree]]

> [[doc: geometry::DQuadTree]]

## Polygons

Some basic [[geometry::Polygon | text: polygon]] services.

This module contains interesting algorithms for [[geometry::ConvexPolygon | text: `ConvexPolygon`]]only at the moment. A Convex [[geometry::polygon]] can be defined as follow :

* All its interior angles are less than 180°. this means that all the vertices of the polygon
  will [[geometry::Point | text: point]] outwards, away from the interior of the shape.

* Every point on every [[geometry::Line | text: line]] segment between two points inside or on the boundary of the polygon
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

[[features: geometry | mentities: geometry::Polygon;geometry::ConvexPolygon;geometry::Line;geometry::ILine3d;geometry::Line3d;geometry::Point;geometry::BoxedCollection;geometry::ILine;geometry::IPoint3d;geometry::Boxed3d;geometry::DQuadTree;geometry::BoxedArray;geometry::Point3d;geometry::IPoint;geometry::APolygon;geometry::Box3d;geometry::Box;geometry::Boxed;geometry::SQuadTree;geometry::QuadTree]]

## Authors

This project is maintained by [[ini-maintainer: geometry]].
