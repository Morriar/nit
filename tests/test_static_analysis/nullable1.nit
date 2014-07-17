import end

class Object
end

class I
end

class A
	var a: I
	var b: nullable I

	init do
		self.a = new I
		a = new I
		b = a #useless
	end

	fun foo do
		a = new I
		b = a #useless
	end
end

class B
	super A
	var c: I
	var d: nullable I

	init do
		self.c = new I
		a = new I
		d = a #useless
	end

	redef fun foo do
		c = a
		b = a #useless
	end
end

class C
	super B
	var e: I

	init do
		e = a
		self.e = new I
		b = d
	end

	fun bar do
		e = a
		b = a #useless
	end
end

var a = new A
var b = new B
var c = new C

# get calls: 9
# non null calls: 8
# useless: 5
