# Low-level wrapper of the SDL 2.0 library (as `sdl2`) and SDL_image 2.0 (as `sdl2::image`)

> match: sdl2::SDL
> match: sdl2::sdl2_base::Sys::sdl

The main entry point of this project, `sdl2`, exposes some features of the base
library: video, events, syswm, etc. The alternative entry point `sdl2::image` offers
mainly `SDLSurface::load` to load images from PNG, JPG or TIF files.

> match: sdl2::SDLInitFlags::video
> match: sdl2::events
> match: sdl2::SDLInitFlags::events
> match: sdl2::syswm
> match: sdl2::image::SDLSurface::load
> match: sdl2::image
> match: sdl2::SDLImgInitFlags::png
> match: sdl2::SDLImgInitFlags::jpg
> match: sdl2::SDLImgInitFlags::tif
> match: core::file

You can also import `sdl2::all` to get `sdl2` and all its sister libraries, which is only
`sdl2::image` at this point.

> match: sdl2::all
> match: sdl2::SDLMouseEvent::which

## Examples

> match: sdl2>examples>

See the `minimal` example within this project at `examples/minimal` for a simple example
of how to use this project.

> match: sdl2>examples>
> match: sdl2>examples>

