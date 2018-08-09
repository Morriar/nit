# Basic geometry data structures and services

> match: geometry::geometry
> match: serialization::Deserializer
> match: serialization::Serializer
> match: geometry::QuadTree
> match: geometry>
> match: geometry
> match: core::Collection
> match: core::Tm
> match: geometry::DQuadTree

## Points and Lines

> match: core::stream::LineIterator::line
> match: geometry::Line
> match: geometry::Point
> match: core::Reader::read_line
> match: core::Reader::append_line_to
> match: core::Reader::each_line
> match: geometry::ILine
> match: core::Text::chomp
> match: geometry::Line3d

The very basics of geometry needs, for two and three-dimensional space.

> match: geometry::geometry
> match: geometry>
> match: geometry
> match: core::Text::justify

## Boxes and detection collision

> match: geometry::polygon::APolygon::axes

Boxes module introduces Bounding boxes for Points and Lines and services to detect collision or inclusion between boxes.
It means a simple and fast way to test collision but not really accurate since it uses bounding boxes.

> match: geometry>
> match: geometry
> match: geometry::Boxed::padded
> match: geometry::Boxed
> match: geometry::Box::around
> match: geometry::Box3d::around
> match: core::Reader::append_line_to
> match: core::stream::LineIterator::line
> match: geometry::Box
> match: geometry::polygon::APolygon::axes
> match: serialization>
> match: serialization
> match: geometry::Line
> match: serialization::AsyncCache
> match: serialization::Deserializer
> match: geometry::BoxedArray
> match: core::re::NativeRegex
> match: core::Reader::read_line
> match: geometry::Point
> match: core::ropes::RopeCharIteratorPiece
> match: core::Finalizable::finalize
> match: core::Path::open_wo
> match: geometry::Box::lrbt
> match: geometry::Box::lrtb
> match: core::Object::is_same_type
> match: core::math::Sys::nan
> match: core::Path::open_ro
> match: core::Queue::peek
> match: geometry::Box::ltwh
> match: core::Sys::main
> match: geometry::Box::lbwh
> match: core::Finalizable
> match: serialization::Serializer
> match: core::math::Float::is_nan
> match: core::Reader::each_line

## Quadtrees

> match: geometry::QuadTree

A QuadTree is a tree data structure in which each internal node has exactly four children
They're most often used to partition two-dimensional space by recursively subdividing
it into four quadrants or regions.

> match: geometry>
> match: geometry
> match: core::Finalizable::finalize
> match: geometry::DQuadTree
> match: geometry::SQuadTree
> match: core::ropes::RopeCharIteratorPiece::node
> match: core::hash_collection::HashSetIterator::node
> match: core::hash_collection::HashMapIterator::node
> match: core::Object::object_id
> match: core::list::ListIterator::node
> match: serialization>
> match: serialization
> match: geometry::QuadTree::subdivide
> match: geometry::QuadTree
> match: core::ropes::Concat::left
> match: core::ropes::Concat::right
> match: core::Collection::has_exactly
> match: core::union_find::DisjointSet::nodes
> match: core::Text::justify
> match: core::Text::to_camel_case
> match: geometry::QuadTree::parent_node
> match: core::FlatText::fast_cstring
> match: serialization::engine_tools::Object::serialization_hash
> match: core::re::NativeRegex
> match: geometry::QuadTree::is_leaf
> match: core::Bytes::items
> match: core::Object::SELF
> match: core::Object::is_same_instance
> match: core::Map
> match: geometry::QuadTree::data
> match: core::CircularArray
> match: core::Object::output
> match: core::DisjointSet
> match: core::Object::is_same_type
> match: geometry::QuadTree::with_parent
> match: serialization::Serializable::core_serialize_to
> match: core::FlatText::items
> match: core::Object::output_class_name
> match: geometry::QuadTree::children
> match: core::Writable::write_to_string
> match: core::flat::FlatBuffer::with_infos
> match: core::Queue
> match: core::Path
> match: core::Sys
> match: serialization::CachingSerializer::link
> match: serialization::Deserializer::deserialize_attribute
> match: geometry::SQuadTree::height
> match: geometry::SQuadTree::width
> match: core::abstract_collection::CoupleMapIterator
> match: core::Error::message
> match: geometry::QuadTree::item_limit
> match: core::abstract_text::CString::to_s_unsafe
> match: core::Error::cause
> match: core::Path::rmdir
> match: core::Collection::has_all
> match: core::Task
> match: core::FileStat
> match: serialization::Serializer::serialize_core
> match: core::queue::Sequence::as_fifo
> match: core::MapRead::has_key
> match: geometry::SQuadTree::with_parent
> match: core::ropes::RopeCharIteratorPiece::rdone
> match: core::ropes::RopeCharIteratorPiece::ldone
> match: core::Collection::has_any
> match: core::Text::chomp
> match: core::DisjointSet::number_of_subsets
> match: core::file::Text::relpath
> match: core::Object::hash
> match: core::Text::escape_to_c

* They decompose space into adaptable cells
* Each cell has a maximum capacity. When maximum is reached, the cell splits.

> match: geometry>
> match: geometry
> match: core::Text::justify
> match: core::bytes::Bytes::capacity
> match: core::string_search::Text::split
> match: geometry>
> match: geometry
> match: core::Comparable::max
> match: core::ropes::Sys::maxlen
> match: core::Comparator::max
> match: core::flat::FlatBuffer::capacity
> match: core::hash_collection::HashCollection::capacity
> match: core::CircularArray::enlarge
> match: core::array::Array::capacity
> match: core::Finalizable::finalize
> match: core::Pattern::split_in
> match: core::ArrayMap::enlarge
> match: core::AbstractArray::enlarge
> match: core::hash_collection::HashCollection::enlarge
> match: core::ArraySet::enlarge
> match: core::CString::new
> match: core::string_search::Text::split_with
> match: core::Stream::lookahead_capacity
> match: core::ropes::RopeSubstrings::max
> match: core::ropes::RopeCharIterator::max
> match: core::Buffer::capitalize
> match: core::string_search::Text::split_once_on
> match: core::ropes::RopeByteIterator::max
> match: core::NativeArray::new
> match: core::Object::!=
> match: core::Bytes::split_with
> match: geometry::DQuadTree
> match: core::Collection::has
> match: core::Bytes::with_capacity
> match: geometry::QuadTree::item_limit
> match: core::Buffer::with_cap
> match: core::Ref
> match: core::Codec::char_max_size
> match: core::FileStat
> match: core::Regex::optimize_has
> match: serialization::Serializer::serialize_core
> match: serialization>
> match: serialization
> match: core::Writable::write_to_string
> match: core::Object::is_same_instance

Quadtrees are using Boxed objects to determine their distribution in the 2D space.

> match: geometry>
> match: geometry
> match: geometry::Box
> match: geometry::Boxed
> match: serialization::engine_tools::Object::is_same_serialized
> match: geometry::QuadTree
> match: core::Text::justify
> match: geometry::SQuadTree
> match: core::Object::object_id
> match: core::bytes::CString::to_bytes
> match: geometry::Box3d
> match: geometry::BoxedCollection
> match: core::bytes::CString::to_bytes_with_copy
> match: geometry::DQuadTree
> match: core::Finalizable::finalize
> match: geometry::Point
> match: core::Finalizable
> match: core::Object::is_same_instance
> match: geometry::IPoint::dist2
> match: serialization::Deserializer::deserialize_attribute
> match: geometry::IPoint::dist
> match: geometry::Line
> match: serialization>
> match: serialization
> match: geometry::ILine
> match: core::re::NativeRegex
> match: geometry::IPoint
> match: core::Writable::write_to_string
> match: core::Writable::write_to_bytes
> match: core::Text::trim
> match: serialization::Deserializer::deserialize_class_intern
> match: core::Char::is_whitespace
> match: core::Object::hash
> match: core::CachedAlphaComparator
> match: serialization::Serializer::serialize
> match: serialization::Serializer::current_object
> match: core::String
> match: serialization::SerializerCache::id_for
> match: serialization::AttributeTypeError::attribute
> match: core::FlatText::fast_cstring
> match: serialization::SerializerCache::new_id_for
> match: serialization::Deserializer::deserialize_class
> match: core::bytes::Int::to_bytes
> match: serialization::Deserializer::notify_of_creation
> match: serialization::Serializer::serialize_attribute
> match: core::Object::SELF
> match: serialization::SerializerCache::has_object
> match: serialization::DeserializerCache::[]=
> match: serialization::engine_tools::Object::serialization_hash
> match: core::Text::bytes
> match: serialization::DeserializerCache::has_id
> match: serialization::SerializerCache
> match: core::FlatText::items
> match: core::Pointer::address_is_null
> match: core::Collection
> match: core::Bytes::items
> match: serialization::AttributeError::receiver
> match: core::Iterator::finish

This API provides two different types of Quadtree : Static and Dynamic (respectively `SQuadTree` and `DQuadTree`).

> match: core::Object::SELF
> match: geometry>
> match: geometry
> match: core::Task
> match: core::Collection
> match: geometry::SQuadTree
> match: core::Object::!=

* Static: When you create the QuadTree, you need to specify the region that it will cover

* Dynamic: You just need to fill the quadtree with objects, and when the threshold is reached,
  it will automatically divide the current region, depending on the distribution of objects already in the region.

> match: geometry::SQuadTree
> match: geometry>
> match: geometry
> match: core::file::Sys::wipe_write
> match: serialization>
> match: serialization
> match: core::Writable::write_to_bytes
> match: core::file::NativeFile::set_buffering_type
> match: core::ISODate::timezone
> match: geometry::QuadTree
> match: core::Object::is_same_instance
> match: core::FileStat
> match: core::flat::FlatText::chars_to_escape_to_c
> match: core::MapRead::get_or_null
> match: core::file::Text::to_program_name
> match: geometry::Box::around
> match: core::FlatText::fast_cstring
> match: geometry::Box3d::around
> match: core::Text::substring_from
> match: geometry>
> match: geometry
> match: geometry::SQuadTree
> match: core::Object::is_same_instance
> match: core::Finalizable
> match: core::Writable::write_to_bytes
> match: serialization>
> match: serialization
> match: core::Finalizable::finalize
> match: core::Object::object_id
> match: geometry::BoxedCollection::items_overlapping
> match: serialization::SerializerCache::new_id_for
> match: serialization::engine_tools::Object::is_same_serialized
> match: geometry::DQuadTree
> match: core::Buffer::written
> match: serialization::Deserializer::deserialize_attribute
> match: geometry::QuadTree
> match: serialization::Deserializer::deserialize_class_intern
> match: core::file::Text::chdir
> match: core::flat::FlatText::chars_to_escape_to_c
> match: serialization::SerializerCache::id_for
> match: core::bytes::CString::to_bytes
> match: core::FileStat
> match: core::file::Sys::wipe_write
> match: core::bytes::Text::binarydigest_to_bytes
> match: serialization::Deserializer::keep_going
> match: core::bytes::CString::to_bytes_with_copy
> match: serialization::DeserializerCache
> match: core::file::Text::relpath
> match: core::file::Text::to_program_name
> match: serialization::DeserializerCache::received
> match: serialization::AttributeTypeError::attribute
> match: serialization::DeserializerCache::[]=
> match: core::Text::bytes
> match: serialization::SerializerCache::sent
> match: geometry::Boxed
> match: core::Object::SELF
> match: serialization::SerializerCache::has_object
> match: core::FinalizableOnce
> match: serialization::Deserializer::deserialize_class
> match: serialization::AttributeError::receiver
> match: core::Range::step
> match: core::Text::chars
> match: serialization::Deserializer::notify_of_creation
> match: core::Writable::write_to_string
> match: core::file::NativeFile::set_buffering_type
> match: serialization::DeserializerCache::has_id
> match: serialization::inspect::InspectSerializer
> match: core::flat::FlatBuffer::with_infos
> match: geometry::Boxed3d
> match: core::abstract_text::Object::native_class_name
> match: core::flat::FlatText::chars_to_html_escape
> match: serialization::Serializer::serialize_attribute
> match: core::Pointer::address_is_null
> match: core::FlatText::fast_cstring
> match: serialization::DeserializerCache::object_for
> match: core::Match::after
> match: serialization::Serializer::current_object
> match: core::Sys::run
> match: serialization::SerializerCache::next_available_id
> match: core::file::Sys::print
> match: serialization::Serializer::serialize
> match: serialization::CachingSerializer::link

## Polygons

> match: geometry::Polygon

Some basic polygon services.

> match: geometry::Polygon
> match: serialization::Deserializer
> match: geometry>
> match: geometry
> match: serialization::Serializer
> match: geometry::polygon::Sys::triangulate
> match: geometry::APolygon::points

This module contains interesting algorithms for `ConvexPolygon`only at the moment. A Convex polygon can be defined as follow :

> match: geometry>
> match: geometry
> match: core>collection>
> match: geometry::Polygon
> match: geometry::APolygon::contain
> match: serialization>
> match: serialization
> match: core::ProcessDuplex
> match: core::Sys::main
> match: core::Sys
> match: geometry::ConvexPolygon
> match: geometry::Boxed::contains
> match: geometry::polygon::Sys::triangulate
> match: geometry::APolygon::points
> match: core::Reader
> match: core::Text::capitalized
> match: core::Map
> match: core::Writer
> match: core>codecs>
> match: core::Bytes::items
> match: core::bytes::Int::to_bytes
> match: core::Finalizable::finalize
> match: geometry::ConvexPolygon::is_ccw
> match: geometry::polygon::PolygonSorter
> match: core::Duplex
> match: core::Comparable::OTHER
> match: core::Collection::has_only
> match: core::Writer::is_writable
> match: core::RemovableCollection
> match: core::abstract_text::CString::fill_from
> match: core::SimpleCollection
> match: core::Collection::has_exactly
> match: core::Text::to_snake_case
> match: geometry::polygon::ClockWiseSort
> match: core::Buffer::capitalize
> match: serialization::Serializable
> match: core::Collection::has_all
> match: core::Collection::has_any
> match: core::codecs
> match: core::Object::output
> match: meta
> match: meta>
> match: geometry::polygon::CounterClockWiseSort
> match: core::Object::output_class_name
> match: meta::meta
> match: core::Path::files
> match: core::Writable
> match: core::Path::link_stat
> match: core::BytePattern
> match: core::re::NativeMatchArray::[]
> match: serialization::Serializer::serialize_core
> match: geometry::polygon::APolygon::project
> match: core::re::NativeRegex
> match: core::Object::SELF
> match: serialization::serialization_core
> match: core::Object::hash

* All its interior angles are less than 180°. this means that all the vertices of the polygon
  will point outwards, away from the interior of the shape.

* Every point on every line segment between two points inside or on the boundary of the polygon
  remains inside or on the boundary.

* The polygon is entirely contained in a closed half-plane defined by each of its edges.

* For each edge, the interior points are all on the same side of the line that the edge defines.

* The angle at each vertex contains all other vertices in its edges and interior.

> match: geometry>
> match: geometry
> match: geometry::APolygon::points
> match: geometry::Polygon
> match: geometry::Point
> match: serialization>
> match: serialization
> match: core::Buffer::written
> match: geometry::polygon::PolygonSorter
> match: core::flat::FlatString::full
> match: geometry::polygon::ClockWiseSort
> match: core::flat::FlatBuffer::with_infos
> match: geometry::ConvexPolygon::is_ccw
> match: geometry::polygon::CounterClockWiseSort
> match: core::Range::step
> match: geometry::APolygon::add_vertex
> match: geometry::angles::Float::angle_normalize
> match: geometry::polygon::APolygon::vertices
> match: geometry::polygon::Sys::triangulate
> match: geometry::IPoint
> match: serialization::Deserializer::keep_going
> match: core::Writable::write_to_string
> match: core::file::Sys::wipe_write
> match: core::Float
> match: core::FileStat
> match: core::Writable
> match: geometry::polygon::PolygonSorter::center
> match: core::Int::code_point
> match: core::flat::FlatText::chars_to_html_escape
> match: core::Text::substring_from
> match: core::native::UInt32::code_point
> match: geometry::polygon::Sys::triangulate_recursive
> match: core::file::NativeFile::set_buffering_type
> match: meta
> match: meta>
> match: core::flat::FlatString::with_infos
> match: geometry::IPoint::dist2
> match: core::Writable::write_to_bytes
> match: core::Collection::has_exactly
> match: core::flat::FlatText::chars_to_escape_to_c
> match: core::abstract_text::NativeArray::native_to_s
> match: core::Sys
> match: meta::meta
> match: geometry>
> match: geometry
> match: geometry::Line
> match: geometry::Point
> match: geometry::ILine
> match: geometry::ILine::point_left
> match: core::stream::LineIterator::line
> match: geometry::ILine::point_right
> match: geometry::Line3d
> match: geometry::ILine3d
> match: geometry::APolygon::points
> match: geometry::IPoint
> match: geometry>
> match: geometry
> match: geometry::Polygon
> match: geometry::APolygon::contain
> match: geometry::polygon::APolygon::project
> match: geometry::Boxed::contains
> match: core>collection>
> match: geometry::polygon::Projection
> match: core::Sys
> match: geometry::polygon::Sys::triangulate
> match: geometry::APolygon::points
> match: core::BytesWriter::closed
> match: geometry::ConvexPolygon::is_ccw
> match: geometry::polygon::PolygonSorter
> match: core::Collection::has_only
> match: core::abstract_text::CString::fill_from
> match: core::Collection::has_exactly
> match: geometry::polygon::ClockWiseSort
> match: core::Collection::has_all
> match: core::Collection::has_any
> match: geometry::polygon::APolygon::axes
> match: geometry::polygon::CounterClockWiseSort
> match: core::Path::files
> match: core::Finalizable::finalize
> match: core::Path::each_line
> match: meta
> match: meta>
> match: serialization>
> match: serialization
> match: core::bytes::Text::binarydigest_to_bytes
> match: meta::meta
> match: core::bytes::Text::hexdigest_to_bytes
> match: core::Text::copy_to_native
> match: core::Reader::each_line
> match: geometry>
> match: geometry
> match: core::stream::LineIterator::line
> match: geometry::polygon::Projection
> match: geometry::polygon::APolygon::project
> match: geometry::Line
> match: core::Reader::read_line
> match: core::Reader::each_line
> match: core::Reader::append_line_to
> match: core::Text::chomp
> match: geometry::Point
> match: geometry::ILine
> match: geometry::Line3d
> match: core::Reader::read_lines
> match: geometry::ILine3d
> match: core>collection>
> match: core::Sys
> match: geometry::IPoint
> match: core::Writable::write_to_string
> match: core::Collection::has_exactly
> match: core::ProcessDuplex::write_and_read
> match: core::Float
> match: geometry::polygon::APolygon::axes
> match: serialization::CachingSerializer::link
> match: meta
> match: meta>
> match: core::Writable
> match: core::Object::SELF
> match: meta::meta
> match: core::Int::code_point
> match: core::native::UInt32::code_point
> match: core::file::Sys::gets
> match: geometry::IPoint::dist2
> match: core::Writable::write_to_bytes
> match: serialization::engine_tools::Object::serialization_hash
> match: core::file::Sys::buffer_mode_line
> match: serialization>
> match: serialization
> match: core::Char::code_point
> match: core::MapRead::values
> match: core::Object::object_id
> match: core::MapRead::keys
> match: core::Finalizable::finalize
> match: core::MapValuesIterator
> match: core::MapKeysIterator
> match: geometry::ILine::point_left
> match: geometry::ILine::point_right
> match: geometry::Point3d
> match: geometry::polygon::APolygon::vertices
> match: geometry::APolygon::add_vertex
> match: geometry>
> match: geometry
> match: geometry::APolygon::contain
> match: geometry::Boxed::contains
> match: geometry::APolygon::delete_vertex
> match: geometry::polygon::Projection
> match: geometry::APolygon::points
> match: geometry::angles::Point::atan2

A polygon which is not convex is called concave. Convex polygon are used because most
geometric problems are simpler and faster on convex objects than on non-convex ones.

> match: geometry>
> match: geometry
> match: geometry::polygon::Sys::triangulate
> match: geometry::Polygon
> match: core::Finalizable::finalize
> match: serialization>
> match: serialization
> match: geometry::APolygon::is_convex
> match: geometry::ConvexPolygon
> match: core::Object::object_id
> match: core::Object::hash
> match: core::Writable::write_to_string
> match: core::Error::message
> match: core::math::Float::is_nan
> match: serialization::Serializer::serialize_core
> match: core::Pattern::search_index_in
> match: core::Object::output
> match: core::Collection::has_exactly
> match: core::FlatText::fast_cstring
> match: core::FinalizableOnce
> match: core::Object::output_class_name
> match: serialization::Deserializer::deserialize_attribute
> match: core::Writable::write_to_bytes
> match: core::FlatText::items
> match: core::Sys
> match: core::Object::is_same_instance
> match: core::flat::FlatBuffer::with_infos
> match: core::Object::SELF
> match: geometry::ConvexPolygon::is_ccw
> match: core::ProcessDuplex
> match: core::Map
> match: serialization::Deserializer::deserialize_class_intern
> match: core::bytes::Int::to_bytes
> match: core::bytes::Text::hexdigest_to_bytes
> match: geometry::APolygon::points
> match: core::Bytes::items
> match: core::FileStat
> match: core::file::Text::simplify_path
> match: core::bytes::Text::binarydigest_to_bytes
> match: geometry::IPoint::dist2
> match: core::Text::chomp
> match: core::Buffer::written
> match: core::Pattern::split_in
> match: core::Text::to_snake_case
> match: core::Writable
> match: geometry::polygon::PolygonSorter
> match: geometry::polygon::Sys::convex_hull
> match: serialization::Deserializer::notify_of_creation
> match: core::Text::to_camel_case
> match: serialization::Serializer::serialize_attribute
> match: core::Text::escape_to_mk
> match: core::String
> match: core::Task
> match: core::Stream::finish
> match: core::CachedAlphaComparator
> match: core::re::NativeRegex
> match: core::Collection::has_all
> match: serialization::Deserializer::deserialize_class
> match: core::Text::escape_to_c
> match: core::flat::FlatText::chars_to_escape_to_c
> match: core::Writer::is_writable
> match: geometry::polygon::ClockWiseSort
> match: core::AbstractArrayRead::sub
> match: core::MapRead::has_key
> match: core::Reader
> match: core::Writer
> match: core::Object::==
> match: core::Collection::has_any

Services provided :

> match: core::Collection
> match: core::Writable
> match: core::queue::SimpleCollection::as_random
> match: core::MapRead::provide_default_value

* Point in convex polygon
* Intersection of convex polygon
* Convex hull of a set of points
* Triangulation of polygon

> match: geometry>
> match: geometry
> match: geometry::Polygon
> match: geometry::polygon::Sys::triangulate
> match: geometry::APolygon::points
> match: geometry::Point
> match: geometry::APolygon::is_convex
> match: core::Set::intersection
> match: geometry>
> match: geometry
> match: geometry::Polygon
> match: geometry::polygon::Sys::triangulate
> match: core::hash_collection::HashSetIterator::set
> match: geometry::polygon::Sys::convex_hull
> match: core::Set
> match: geometry::Point
> match: core::Set::union
> match: core::Set::intersection
> match: geometry::IPoint
> match: geometry>
> match: geometry
> match: geometry::Polygon
> match: geometry>
> match: geometry

