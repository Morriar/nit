# Basic geometry data structures and services

> match: geometry
> match: geometry::DQuadTree
> match: geometry::QuadTree
> match: geometry::BoxedCollection
> match: geometry::SQuadTree
> match: geometry::points_and_lines
> match: geometry::angles
> match: geometry::boxes
> match: geometry::quadtree

## Points and Lines

> match: geometry::Point
> match: geometry::Line
> match: geometry::polygon::PointXCompare
> match: geometry::Point3d
> match: geometry::points_and_lines
> match: geometry::ILine
> match: geometry::ILine3d
> match: geometry::Line3d
> match: geometry::IPoint
> match: geometry
> match: geometry::IPoint3d

The very basics of geometry needs, for two and three-dimensional space.

> match: geometry
> match: geometry::SQuadTree
> match: geometry::points_and_lines
> match: geometry::boxes
> match: geometry::quadtree

## Boxes and detection collision

> match: geometry::polygon::APolygon::axes
> match: geometry
> match: geometry::quadtree

Boxes module introduces Bounding boxes for Points and Lines and services to detect collision or inclusion between boxes.
It means a simple and fast way to test collision but not really accurate since it uses bounding boxes.

> match: geometry::Point
> match: geometry::Boxed
> match: geometry::Boxed3d
> match: geometry::Box
> match: geometry::Line
> match: geometry::polygon::PointXCompare
> match: geometry::Point3d
> match: geometry
> match: geometry::points_and_lines
> match: geometry::BoxedArray
> match: geometry::Box3d
> match: geometry::ILine
> match: geometry::ILine3d
> match: geometry::Line3d
> match: geometry::IPoint
> match: geometry::boxes
> match: geometry::Polygon
> match: geometry::polygon::Projection
> match: geometry::IPoint3d
> match: geometry::angles
> match: geometry::quadtree

## Quadtrees

> match: geometry::QuadTree
> match: geometry::SQuadTree
> match: geometry::quadtree
> match: geometry::DQuadTree
> match: geometry

A QuadTree is a tree data structure in which each internal node has exactly four children
They're most often used to partition two-dimensional space by recursively subdividing
it into four quadrants or regions.

> match: geometry::QuadTree
> match: geometry::DQuadTree
> match: geometry::SQuadTree
> match: geometry
> match: geometry::quadtree
> match: geometry::BoxedCollection
> match: geometry::Box
> match: geometry::Box3d

* They decompose space into adaptable cells
* Each cell has a maximum capacity. When maximum is reached, the cell splits.

> match: geometry
> match: geometry::Box
> match: geometry::SQuadTree
> match: geometry::Box3d
> match: geometry::quadtree
> match: geometry
> match: geometry::DQuadTree
> match: geometry::SQuadTree
> match: geometry::quadtree

Quadtrees are using Boxed objects to determine their distribution in the 2D space.

> match: geometry::QuadTree
> match: geometry::Boxed
> match: geometry
> match: geometry::Box
> match: geometry::SQuadTree
> match: geometry::BoxedCollection
> match: geometry::DQuadTree
> match: geometry::Box3d
> match: geometry::Point
> match: geometry::quadtree
> match: geometry::Line
> match: geometry::ILine
> match: geometry::IPoint
> match: geometry::Boxed3d

This API provides two different types of Quadtree : Static and Dynamic (respectively `SQuadTree` and `DQuadTree`).

> match: geometry::QuadTree
> match: geometry::DQuadTree
> match: geometry::SQuadTree
> match: geometry
> match: geometry::Box
> match: geometry::Box3d
> match: geometry::quadtree
> match: geometry::boxes

* Static: When you create the QuadTree, you need to specify the region that it will cover

* Dynamic: You just need to fill the quadtree with objects, and when the threshold is reached,
  it will automatically divide the current region, depending on the distribution of objects already in the region.

> match: geometry::QuadTree
> match: geometry::SQuadTree
> match: geometry
> match: geometry::quadtree
> match: geometry::DQuadTree
> match: geometry::points_and_lines
> match: geometry::boxes
> match: geometry::QuadTree
> match: geometry
> match: geometry::SQuadTree
> match: geometry::DQuadTree
> match: geometry::Boxed
> match: geometry::quadtree
> match: geometry::Boxed3d
> match: geometry::BoxedCollection
> match: geometry::Box
> match: geometry::Box3d
> match: geometry::points_and_lines
> match: geometry::boxes

## Polygons

> match: geometry::Polygon
> match: geometry
> match: geometry::polygon::PolygonSorter
> match: geometry::polygon::ClockWiseSort
> match: geometry::polygon
> match: geometry::polygon::CounterClockWiseSort

Some basic polygon services.

> match: geometry::Polygon
> match: geometry
> match: geometry::polygon::PolygonSorter
> match: geometry::QuadTree
> match: geometry::polygon::ClockWiseSort
> match: geometry::polygon
> match: geometry::polygon::CounterClockWiseSort
> match: geometry::angles
> match: geometry::points_and_lines
> match: geometry::boxes

This module contains interesting algorithms for `ConvexPolygon`only at the moment. A Convex polygon can be defined as follow :

> match: geometry::Polygon
> match: geometry::ConvexPolygon
> match: geometry
> match: geometry::polygon::PolygonSorter
> match: geometry::polygon::ClockWiseSort
> match: geometry::polygon
> match: geometry::polygon::CounterClockWiseSort
> match: geometry::BoxedCollection
> match: geometry::DQuadTree

* All its interior angles are less than 180°. this means that all the vertices of the polygon
  will point outwards, away from the interior of the shape.

* Every point on every line segment between two points inside or on the boundary of the polygon
  remains inside or on the boundary.

* The polygon is entirely contained in a closed half-plane defined by each of its edges.

* For each edge, the interior points are all on the same side of the line that the edge defines.

* The angle at each vertex contains all other vertices in its edges and interior.

> match: geometry::Point
> match: geometry::Polygon
> match: geometry::polygon::PointXCompare
> match: geometry::Point3d
> match: geometry
> match: geometry::angles
> match: geometry::polygon::PolygonSorter
> match: geometry::polygon::ClockWiseSort
> match: geometry::polygon::CounterClockWiseSort
> match: geometry::IPoint
> match: geometry::points_and_lines
> match: geometry::polygon
> match: geometry::Line
> match: geometry::ILine
> match: geometry::ILine3d
> match: geometry::Line3d
> match: geometry::IPoint3d
> match: geometry::SQuadTree
> match: geometry::Point
> match: geometry::Polygon
> match: geometry::Line
> match: geometry::Point3d
> match: geometry::polygon::PointXCompare
> match: geometry
> match: geometry::ILine
> match: geometry::ILine3d
> match: geometry::Line3d
> match: geometry::IPoint
> match: geometry::points_and_lines
> match: geometry::IPoint3d
> match: geometry::polygon::PolygonSorter
> match: geometry::polygon::ClockWiseSort
> match: geometry::polygon
> match: geometry::polygon::CounterClockWiseSort
> match: geometry::Polygon
> match: geometry
> match: geometry::polygon::Projection
> match: geometry::polygon::PolygonSorter
> match: geometry::polygon::ClockWiseSort
> match: geometry::polygon
> match: geometry::polygon::CounterClockWiseSort
> match: geometry::BoxedCollection
> match: geometry::DQuadTree
> match: geometry::Point
> match: geometry::Line
> match: geometry::polygon::PointXCompare
> match: geometry::Point3d
> match: geometry
> match: geometry::polygon::Projection
> match: geometry::points_and_lines
> match: geometry::ILine
> match: geometry::ILine3d
> match: geometry::Line3d
> match: geometry::IPoint
> match: geometry::IPoint3d
> match: geometry::angles
> match: geometry
> match: geometry::polygon::PolygonSorter
> match: geometry::polygon::ClockWiseSort
> match: geometry::polygon::CounterClockWiseSort
> match: geometry::polygon::Projection
> match: geometry::BoxedCollection
> match: geometry::DQuadTree

A polygon which is not convex is called concave. Convex polygon are used because most
geometric problems are simpler and faster on convex objects than on non-convex ones.

> match: geometry::Polygon
> match: geometry::ConvexPolygon
> match: geometry
> match: geometry::polygon::PolygonSorter
> match: geometry::polygon::ClockWiseSort
> match: geometry::polygon::CounterClockWiseSort
> match: geometry::polygon
> match: geometry::Boxed
> match: geometry::Boxed3d
> match: geometry::BoxedCollection
> match: geometry::Box
> match: geometry::Box3d

Services provided :

> match: geometry
> match: geometry::boxes

* Point in convex polygon
* Intersection of convex polygon
* Convex hull of a set of points
* Triangulation of polygon

> match: geometry::Point
> match: geometry::Polygon
> match: geometry::polygon::PointXCompare
> match: geometry::Point3d
> match: geometry
> match: geometry::IPoint
> match: geometry::points_and_lines
> match: geometry::polygon::PolygonSorter
> match: geometry::polygon::ClockWiseSort
> match: geometry::polygon
> match: geometry::Line
> match: geometry::polygon::CounterClockWiseSort
> match: geometry::ILine
> match: geometry::ILine3d
> match: geometry::Line3d
> match: geometry::IPoint3d
> match: geometry::Polygon
> match: geometry
> match: geometry::polygon::Projection
> match: geometry::polygon::PolygonSorter
> match: geometry::polygon::ClockWiseSort
> match: geometry::polygon
> match: geometry::polygon::CounterClockWiseSort
> match: geometry::Point
> match: geometry::ConvexPolygon
> match: geometry::polygon::PointXCompare
> match: geometry::Point3d
> match: geometry
> match: geometry::IPoint
> match: geometry::points_and_lines
> match: geometry::Line
> match: geometry::ILine
> match: geometry::ILine3d
> match: geometry::Line3d
> match: geometry::IPoint3d
> match: geometry::polygon
> match: geometry::Polygon
> match: geometry
> match: geometry::polygon::PolygonSorter
> match: geometry::polygon::ClockWiseSort
> match: geometry::polygon
> match: geometry::polygon::CounterClockWiseSort

