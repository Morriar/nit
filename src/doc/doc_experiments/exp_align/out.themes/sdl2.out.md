# Low-level wrapper of the SDL 2.0 library (as `sdl2`) and SDL_image 2.0 (as `sdl2::image`)

> theme: api
> theme: title

The main entry point of this project, `sdl2`, exposes some features of the base
library: video, events, syswm, etc. The alternative entry point `sdl2::image` offers
mainly `SDLSurface::load` to load images from PNG, JPG or TIF files.

> theme: api
> theme: features

You can also import `sdl2::all` to get `sdl2` and all its sister libraries, which is only
`sdl2::image` at this point.

> theme: api

## Examples

> theme: examples

See the `minimal` example within this project at `examples/minimal` for a simple example
of how to use this project.

> theme: api
> theme: examples

