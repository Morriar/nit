# `date` - Services to manipulate `Date`, `Time` and `DateTime`

The services are split in 2 classes:

* `Date` handles the year, month and day parts of the date.
* `Time` handles the time in hours, minutes and seconds.

These are united in `DateTime` for a precise time in a precise day.

~~~
var now = new Time.now
var midnight = new Time(0, 0, 0)
assert now > midnight

var nine_thirty = new Time(9, 30, 0)
var eleven_twenty = new Time(11, 20, 0)
assert eleven_twenty > nine_thirty

var pi_day = new Date(2015, 03, 14)
var may_the_fourth = new Date(2015, 5, 4)
assert pi_day < may_the_fourth

var now_t = new DateTime.now
var epoch = new DateTime(1970, 1, 1, 0, 0, 0)
assert now_t > epoch
~~~

## Features

* `Date` - A date, composed by a `year`, a `month` and a `day`
* `DateTime` - A `Time` in a `Date`
* `Time` - A time of the day, composed of an `hour`, a `minute` and a `second` count

## Authors

This project is maintained by **Mehdi Ait Younes <mailto:overpex@gmail.com>**.
