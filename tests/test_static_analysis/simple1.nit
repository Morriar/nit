var x = gets.to_i
# x:1
var y = gets.to_i
# x:1, y:3
if x > y then
	x = x + 1
	# x:6, y:3
else
	while y > 0 do
		y = y - 1
		# x:1, y:10
	end
end
# x:1, x:6, y:3, y:10

var z = x + y
# x:1, x:6, y:3, y:10, z:16

print z

