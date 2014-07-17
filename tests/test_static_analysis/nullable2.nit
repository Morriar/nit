class A
	var a: Int
	var b: nullable Int

	init do
		self.a = 10
		a = 10
		print a # useless

		if b == null then
			a = 12
		else
			a = 0
		end

		print a # useless
	end

	fun foo do
		print a
	end

	fun bar do
		while b < 0 do
			a = 10
		end
		print a
	end

	fun baz do
		print a
		print a # useless
	end
end

class B
	super A

	#redef fun a=(a) do end
	#redef fun a do return a
end

var a = new A
a.foo
a.bar
a.baz


# getter calls: 8
# non nulls: 6
# useless: 3
