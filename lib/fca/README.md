# `fca` - Formal Concept Analysis for Nit

* [Features](#Features)
* [`FormalContext` - Formal Context](#`FormalContext`---Formal-Context)
* [`FormalConcept` - Formal Concept](#`FormalConcept`---Formal-Concept)
* [`ConceptLattice` - Concept Lattice](#`ConceptLattice`---Concept-Lattice)
* [Authors](#Authors)

Formal concept analysis (FCA) is a principled way of deriving a concept hierarchy
or formal ontology from a collection of objects and their properties.
This means deriving implicit relationships between objects regarding their
attributes.

Each concept in the hierarchy represents the set of objects sharing the same
values for a certain set of properties; and each sub-concept in the hierarchy
contains a subset of the objects in the concepts above it.

Formal concept analysis finds practical application in fields including data
mining, text mining, machine learning or semantic web.

## Building a FormalContext

We use the example from https://en.wikipedia.org/wiki/Formal_concept_analysis:

~~~
var fc = new FormalContext[Int, String]
fc.set_object_attributes(1, ["odd", "square"])
fc.set_object_attributes(2, ["even", "prime"])
fc.set_object_attributes(3, ["odd", "prime"])
fc.set_object_attributes(4, ["even", "composite", "square"])
fc.set_object_attributes(5, ["odd", "prime"])
fc.set_object_attributes(6, ["even", "composite"])
fc.set_object_attributes(7, ["odd", "prime"])
fc.set_object_attributes(8, ["even", "composite"])
fc.set_object_attributes(9, ["odd", "square", "composite"])
fc.set_object_attributes(10, ["even", "composite"])
~~~

## Computing the set of FormalConcept

~~~
var concepts = fc.formal_concepts
for concept in concepts do
	print concept
end
~~~

## Visualizing formal concept with ConceptLattice

~~~nitish
var cl = new ConceptLattice[Int, String].from_concepts(concepts)
cl.show_dot
~~~

## Features

### `FormalContext` - Formal Context

A formal context is a triple *K = (G, M, I)*, where *G* is a set of `objects`,
*M* is a set of `attributes`, and *I ⊆ G × M* is a binary relation called incidence
that expresses which objects have which attributes (`objects_attributes`).

Predicate *gIm* designates object *g*'s having attribute *m*.
For a subset *A ⊆ G* of objects and a subset *B ⊆ M* of attributes, one defines
two derivation operators as follows:

* *A' = {m ∈ M | ∀ g ∈ A, gIm}*, and dually
* *B' = {g ∈ G | ∀ m ∈ B, gIm}*.

Properties:

* `FormalContext::formal_concepts` - Derive the set of formal concepts from the objects and attributes
* `FormalContext::set_object_attribute` - Associate an `attribute` to `object`
* `FormalContext::set_object_attributes` - Associate a set of `attributes` to `object`

### `FormalConcept` - Formal Concept

A pair *(A,B)* is a formal concept of a FormalContext *(G, M, I)* provided that:

* *A ⊆ G*,
* *B ⊆ M*,
* *A′ = B*, and
* *B′ = A*.

Equivalently and more intuitively, *(A,B)* is a formal concept precisely when:

* every object in *A* has every attribute in *B*,
* for every object in *G* that is not in *A*, there is some attribute in *B* that
  the object does not have,
* for every attribute in *M* that is not in *B*, there is some object in *A*
  that does not have that attribute.

Properties:

* `FormalConcept::is_subconcept` - Is `self` a subconcept of `super_concept`?

### `ConceptLattice` - Concept Lattice

Formal concepts are partially ordered with regard to inclusion of their extents
or (which is equivalent) inverse inclusion of their intent.

Properties:

* `ConceptLattice::from_concepts` - Build `self` from a set of formal `concepts`.
* `ConceptLattice::is_lower_neighbour` - Is `sub` the greatest lower bound of `sup` considering all `concepts`?

## Authors

This project is maintained by **Alexandre Terrasa <mailto:alexandre@moz-code.org>**.
