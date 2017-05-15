class Calc

	# Multiplication entière
	#
	# ~~~
	# # Creer une calculatrice
	# var calc = new Calc
	# # Faire une multiplication
	# assert calc.mult(1, 10) == 10
	# ~~~
	fun mult(a, b: Int): Int do
		return a * b
	end
end

var calc = new Calc
var exp = 10
var res = calc.mult(1, 10)
assert exp == res
print "OK"
