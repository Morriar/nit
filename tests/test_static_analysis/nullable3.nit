import kernel

class A
	var a: Int
	var b: nullable Int

	init do
		self.a = 10
		a = 10
		b = a # useless

		if b == null then
			a = 12
		else
			a = 0
		end

		b = a # useless
	end

	fun foo do
		b = a
	end

	fun bar do
		while a < 0 do
			a = 10
		end
		b = a # useless
	end

	fun baz do
		b = a
		b = a # useless
	end
end

class B
	super A

	#redef fun a=(a) do end
	#redef fun a do return a
end

# getters: 8
# nonnull: 7
# useless: 4 
