import kernel

class A
	var a: Int = 10
	var b: nullable Int

	init do
		b = a # useless on a
	end

	fun foo do
		a = 10
	end

	fun bar do
		foo
	end

	fun baz do
		bar
		b = a # useless on a
	end

	fun faz do
		var x = new A
		x.foo
		b = a # useless in a
	end
end

class B
	super A

	#redef fun a=(a) do end
	#redef fun a do return a
end

var a = new A
a.baz

# getters: 3
# nonnull: 3
# useless: 3 
