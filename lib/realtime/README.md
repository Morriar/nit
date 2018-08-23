# `realtime` - Services to keep time of the wall clock time

* [Features](#Features)
* [`Clock` - Keeps track of real time](#`Clock`---Keeps-track-of-real-time)
* [Authors](#Authors)

~~~
var clock = new Clock

# sleeping at least 1s
1.0.sleep
assert clock.total >= 1.0
assert clock.lapse >= 1.0

# sleeping at least 5ms
0.005.sleep
assert clock.total >= 1.005
assert clock.lapse >= 0.005
~~~

## Features

### `Clock` - Keeps track of real time

~~~
var clock = new Clock

# sleeping at least 1s
1.0.sleep
assert clock.total >= 1.0
assert clock.lapse >= 1.0

# sleeping at least 5ms
0.005.sleep
assert clock.total >= 1.005
assert clock.lapse >= 0.005
~~~

Properties:

* `Clock::lapse` - Seconds since the last call to `lapse`
* `Clock::peek_lapse` - Seconds since the last call to `lapse`, without resetting the lapse counter
* `Clock::total` - Seconds since the creation of this instance

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
