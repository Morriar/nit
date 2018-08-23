# `posix` - Services conforming to POSIX

The core module `posix` includes POSIX services available on all POSIX compliant systems.
For services provided by some implementations of POSIX but absent from any POSIX version,
import `posix::ext`.

![Diagram for `posix`](uml-posix.svg)

* `ext` - Services not defined in POSIX but provided by most implementations

* `posix` - Services conforming to POSIX

* `Group` - Information on a user group

* `Passwd` - Information on a user account

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
