# Services conforming to POSIX

> match: posix::posix
> match: posix

The core module `posix` includes POSIX services available on all POSIX compliant systems.
For services provided by some implementations of POSIX but absent from any POSIX version,
import `posix::ext`.

> match: posix
> match: posix::posix
> match: posix::ext
> match: core
> match: posix>

