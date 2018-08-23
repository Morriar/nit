# `privileges` - Process privileges management utilities

Used mainly by daemons and such to aquire resources as su and
then drop back to a restricted user.

Example from `privileges::drop_privileges`:

~~~
# Example using the privileges module to drop privileges from root
module drop_privileges is example

import privileges

# basic command line options
var opts = new OptionContext
var opt_ug = new OptionUserAndGroup.for_dropping_privileges
opt_ug.mandatory = true
opts.add_option(opt_ug)

# parse and check command line options
opts.parse(args)
if not opts.errors.is_empty then
	print opts.errors.join("\n")
	print "Usage: drop_privileges [options]"
	opts.usage
	exit 1
end

# original user
print "before {sys.uid}:{sys.gid}"

# make the switch
var user_group = opt_ug.value
assert user_group != null
user_group.drop_privileges

# final user
print "after {sys.uid}:{sys.egid}"
~~~

## Features

* `OptionUserAndGroup` - Option to ask for a username and group
* `UserGroup` - Class to manage user groups

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
