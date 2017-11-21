# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# All the classes and methods related to the manipulation of text entities
module text

import ropes
import string_search
import fixed_ints_text

redef class Text

	# Return `true` if and only if the string equals `"true"`
	#
	# ~~~
	# assert "true".to_b
	# assert not "false".to_b
	# assert not "".to_b
	# assert not "foo".to_b
	# ~~~
	fun to_b: Bool do
		return self.to_s == "true"
	end
end
