# `mpi` - Implementation of the Message Passing Interface protocol by wrapping OpenMPI

* [Features](#Features)
* [`Op` - An MPI operation](#`Op`---An-MPI-operation)
* [`Sendable` - Something sendable directly and efficiently over MPI](#`Sendable`---Something-sendable-directly-and-efficiently-over-MPI)
* [`Receptacle` - Something which can receive data directly and efficiently from MPI](#`Receptacle`---Something-which-can-receive-data-directly-and-efficiently-from-MPI)
* [Other features](#Other-features)
* [Authors](#Authors)

OpenMPI is used only at linking and for it's `mpi.h`. Other implementations
could be used without much modification.

Supports transfer of any valid `Serializable` instances as well as basic
C arrays defined in module `c`. Using C arrays is encouraged when performance
is critical.

Since this module is a thin wrapper around OpenMPI, in case of missing
documentation, you can refer to https://www.open-mpi.org/doc/v1.8/.

## Features

### `Op` - An MPI operation

Used with the `reduce` method.

See <http://www.mpi-forum.org/docs/mpi-1.1/mpi-11-html/node78.html>

Properties:

* `Op::band` - Get a MPI bit-wise and operation.
* `Op::bor` - Get a MPI bit-wise or operation.
* `Op::bxor` - Get a MPI bit-wise xor operation.
* `Op::land` - Get a MPI logical and operation.
* `Op::lor` - Get a MPI logical or operation.
* `Op::lxor` - Get a MPI logical xor operation.
* `Op::max` - Get a MPI maximum operation.
* `Op::maxloc` - Get a MPI maxloc operation.
* `Op::min` - Get a MPI minimum operation.
* `Op::minloc` - Get a MPI minloc operation.
* `Op::op_null` - Get a MPI null operation.
* `Op::prod` - Get a MPI product operation.
* `Op::replace` - Get a MPI replace operation.
* `Op::sum` - Get a MPI sum operation.

Example from `mpi::mpi_simple`:

~~~
module mpi_simple is example

import mpi

# Simple class transfered between processors
class ProcessorInfo
	auto_serializable

	var rank: Int
	var size: Int
	var name: String
	var string_of_random_length: String

	init(mpi: MPI)
	do
		self.rank = comm_world.rank.to_i
		self.size = comm_world.size
		self.name = mpi.processor_name
		self.string_of_random_length = "+" * 10.rand
	end

	redef fun to_s do return "<{name}: {rank}/{size} {string_of_random_length}>"
end

var mpi = new MPI

var data = new CIntArray(2)
if comm_world.size == 1 then
	print "not enough nodes, got only 1"
	mpi.finalize
	exit 1
end

print "stdout: processor '{mpi.processor_name}' {comm_world.rank}/{comm_world.size}"

if comm_world.rank == 0.rank then
	# send - ints
	data[0] = 123
	data[1] = 456
	mpi.send_from(data, 0, 2, 1.rank, 0.tag, comm_world)

	# send - simple string
	mpi.send_all("Hello", 1.rank, 0.tag, comm_world)
	mpi.send_from(" World", 0, 6, 1.rank, 0.tag, comm_world)
	mpi.send_from("+-!0?", 2, 2, 1.rank, 0.tag, comm_world)
else if comm_world.rank == 1.rank then

	# recv - ints
	mpi.recv_into(data, 0, 2, 0.rank, 0.tag, comm_world)
	print "received data: {data[0]} {data[1]}"

	# recv - simple string
	var buf = new FlatBuffer.with_capacity(5)
	mpi.recv_fill(buf, 0.rank, 0.tag, comm_world)
	print "received string: {buf}"

	mpi.recv_into(buf, 5, 6, 0.rank, 0.tag, comm_world)
	print "received string: {buf}"

	mpi.recv_into(buf, 3, 2, 0.rank, 0.tag, comm_world)
	print "received string: {buf}"
end

# Passing complex objects and inverse sender/receiver
if comm_world.rank == 0.rank then
	var errors = 0
	var processors_per_host = new HashMap[String, Int]

	# recv - serializable
	for p in [1 .. comm_world.size[ do
		var a = mpi.recv(new Rank.any, 0.tag, comm_world)
		print "received serialized: {a or else "<null>"}"

		if a != null and a isa ProcessorInfo then
			if not processors_per_host.keys.has(a.name) then
				processors_per_host[a.name] = 1
			else processors_per_host[a.name] += 1
		else errors += 1
	end

	print "errors: {errors}"
	print "processors: {processors_per_host.join(", ", ": ")}"
else
	# send - serializable
	srand_from comm_world.rank.to_i
	var a = new ProcessorInfo(mpi)
	mpi.send(a, 0.rank, 0.tag, comm_world)
end

mpi.finalize
~~~

### `Sendable` - Something sendable directly and efficiently over MPI

Subclasses of `Sendable` should use the native MPI send function, without
using Nit serialization.

### `Receptacle` - Something which can receive data directly and efficiently from MPI

Subclasses of `Receptacle` should use the native MPI recveive function,
without using Nit serialization.

## Other features

* `Comm` - An MPI communicator
* `DataType` - An MPI data type
* `ErrorClass` - An MPI error class
* `MPI` - Handle to most MPI services
* `Rank` - An MPI rank within a communcator
* `Status` - Status of a communication used by `MPI::probe`
* `SuccessOrError` - An MPI return code to report success or errors
* `Tag` - An MPI tag, can be defined using `Int::tag`

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
