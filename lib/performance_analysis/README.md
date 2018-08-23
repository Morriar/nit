# `performance_analysis` - Services to gather information on the performance of events by categories

Provides `PerfMap` to manage all the categories and
`PerfEntry` for per-category statistics.

~~~
for i in 100.times do
    var clock = new Clock

    # Do some "work" here
    nanosleep(0, 1000000)

    # Register the perf
    sys.perfs["sleep 1ms"].add clock.lapse

    # Do some other "work" here
    nanosleep(0, 5000000)

    # Register the perf
    sys.perfs["sleep 5ms"].add clock.lapse
end

assert sys.perfs["sleep 1ms"].count == 100
assert sys.perfs["sleep 1ms"].avg.is_approx(0.001, 0.001)
assert sys.perfs["sleep 5ms"].avg.is_approx(0.005, 0.005)
~~~

## Features

* `PerfEntry` - Statistics on wall clock execution time of a category of events by `name`
* `PerfMap` - Collection of statistics on many events

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
