# Basic geometry data structures and services

> match: geometry::geometry
> match: geometry
> match: geometry::QuadTree::data
> match: geometry::QuadTree
> match: geometry::DQuadTree
> match: geometry>

## Points and Lines

> match: geometry::APolygon::points
> match: geometry::Line
> match: geometry::Point
> match: geometry::ILine
> match: geometry::Line3d
> match: geometry::ILine3d
> match: geometry::IPoint

The very basics of geometry needs, for two and three-dimensional space.

> match: geometry
> match: geometry::geometry
> match: geometry>
> match: geometry::SQuadTree

## Boxes and detection collision

> match: geometry::boxes
> match: geometry::Box
> match: geometry::polygon::APolygon::axes
> match: geometry>
> match: geometry

Boxes module introduces Bounding boxes for Points and Lines and services to detect collision or inclusion between boxes.
It means a simple and fast way to test collision but not really accurate since it uses bounding boxes.

> match: geometry::boxes
> match: geometry::Box
> match: geometry::APolygon::points
> match: geometry::Point
> match: geometry::Line
> match: geometry>
> match: geometry
> match: geometry::Boxed::padded
> match: geometry::Box::around
> match: geometry::Box3d::around

## Quadtrees

> match: geometry::SQuadTree::height
> match: geometry::SQuadTree::width
> match: geometry::QuadTree
> match: geometry::SQuadTree
> match: geometry::DQuadTree

A QuadTree is a tree data structure in which each internal node has exactly four children
They're most often used to partition two-dimensional space by recursively subdividing
it into four quadrants or regions.

> match: geometry::QuadTree
> match: geometry::QuadTree::children
> match: geometry::quadtree
> match: geometry::QuadTree::data
> match: geometry>
> match: geometry
> match: geometry::DQuadTree
> match: geometry::SQuadTree
> match: geometry::QuadTree::is_leaf

* They decompose space into adaptable cells
* Each cell has a maximum capacity. When maximum is reached, the cell splits.

> match: geometry>
> match: geometry
> match: geometry::QuadTree::item_limit
> match: geometry::Box
> match: geometry::Box3d
> match: geometry::SQuadTree
> match: geometry::DQuadTree
> match: geometry::polygon::Sys::triangulate

Quadtrees are using Boxed objects to determine their distribution in the 2D space.

> match: geometry::Boxed
> match: geometry>
> match: geometry
> match: geometry::Box
> match: geometry::SQuadTree

This API provides two different types of Quadtree : Static and Dynamic (respectively `SQuadTree` and `DQuadTree`).

> match: geometry::SQuadTree
> match: geometry::DQuadTree
> match: geometry::quadtree
> match: geometry>
> match: geometry
> match: geometry::Box
> match: geometry::Box3d
> match: geometry::ILine::P

* Static: When you create the QuadTree, you need to specify the region that it will cover

* Dynamic: You just need to fill the quadtree with objects, and when the threshold is reached,
  it will automatically divide the current region, depending on the distribution of objects already in the region.

> match: geometry::quadtree
> match: geometry::QuadTree
> match: geometry>
> match: geometry
> match: geometry::SQuadTree
> match: geometry::BoxedCollection::items_overlapping
> match: geometry::DQuadTree
> match: geometry::Box::around
> match: geometry::Box3d::around

## Polygons

> match: geometry::Polygon
> match: geometry::APolygon
> match: geometry::ConvexPolygon
> match: geometry::APolygon::points
> match: geometry>

Some basic polygon services.

> match: geometry::Polygon
> match: geometry::polygon
> match: geometry>
> match: geometry
> match: geometry::APolygon
> match: geometry::ConvexPolygon

This module contains interesting algorithms for `ConvexPolygon`only at the moment. A Convex polygon can be defined as follow :

> match: geometry::Polygon
> match: geometry::ConvexPolygon
> match: geometry::Boxed::contains
> match: geometry::polygon
> match: geometry>
> match: geometry
> match: geometry::APolygon

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
> match: geometry::polygon::APolygon::vertices
> match: geometry::APolygon::points
> match: geometry::angles
> match: geometry::Boxed::contains
> match: geometry>
> match: geometry
> match: geometry::polygon::APolygon::project
> match: geometry::ILine
> match: geometry::APolygon::add_vertex
> match: geometry::ILine::point_left
> match: geometry::polygon::Projection
> match: geometry::APolygon::delete_vertex
> match: geometry::APolygon
> match: geometry::polygon::PolygonSorter
> match: geometry::polygon::ClockWiseSort

A polygon which is not convex is called concave. Convex polygon are used because most
geometric problems are simpler and faster on convex objects than on non-convex ones.

> match: geometry::Polygon
> match: geometry::polygon
> match: geometry>
> match: geometry
> match: geometry::ConvexPolygon
> match: geometry::polygon::Sys::triangulate
> match: geometry::APolygon::is_convex

Services provided :

> match: geometry::geometry
> match: geometry::polygon::Projection::max
> match: geometry::polygon::Projection::min
> match: geometry::polygon::PointXCompare
> match: geometry::APolygon

* Point in convex polygon
* Intersection of convex polygon
* Convex hull of a set of points
* Triangulation of polygon

> match: geometry::Polygon
> match: geometry::polygon
> match: geometry::Point
> match: geometry::APolygon::points
> match: geometry::ConvexPolygon
> match: geometry>
> match: geometry
> match: geometry::polygon::Sys::triangulate
> match: geometry::APolygon::is_convex
> match: geometry::polygon::Sys::convex_hull
> match: geometry::APolygon
> match: geometry::IPoint
> match: geometry::ILine::point_left
> match: geometry::ILine::point_right

