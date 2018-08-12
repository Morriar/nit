# Low-level wrapper of the SDL 2.0 library (as `sdl2`) and SDL_image 2.0 (as `sdl2::image`)

> match: sdl2
> match: sdl2::image
> match: sdl2::SDL

The main entry point of this project, `sdl2`, exposes some features of the base
library: video, events, syswm, etc. The alternative entry point `sdl2::image` offers
mainly `SDLSurface::load` to load images from PNG, JPG or TIF files.

> match: sdl2::SDLSurface
> match: sdl2::syswm
> match: sdl2
> match: sdl2::image

You can also import `sdl2::all` to get `sdl2` and all its sister libraries, which is only
`sdl2::image` at this point.

> match: sdl2::image
> match: sdl2
> match: sdl2::SDLRenderer::draw_point

## Examples

> match: sdl2>examples>

See the `minimal` example within this project at `examples/minimal` for a simple example
of how to use this project.

> match: sdl2>examples>minimal>
> match: sdl2>examples>

