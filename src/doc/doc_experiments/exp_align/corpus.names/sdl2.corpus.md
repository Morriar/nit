# Low-level wrapper of the SDL 2.0 library (as `sdl2`) and SDL_image 2.0 (as `sdl2::image`)

> name: sdl2
> name: sdl2::SDL
> name: sdl2::image

The main entry point of this project, `sdl2`, exposes some features of the base
library: video, events, syswm, etc. The alternative entry point `sdl2::image` offers
mainly `SDLSurface::load` to load images from PNG, JPG or TIF files.

> name: sdl2::SDLInitFlags::video
> name: sdl2::events
> name: sdl2::syswm
> name: sdl2::image::SDLSurface::load
> name: sdl2::image
> name: sdl2::SDLImgInitFlags::png
> name: sdl2::SDLImgInitFlags::jpg
> name: sdl2::SDLImgInitFlags::tif
> name: core::file

You can also import `sdl2::all` to get `sdl2` and all its sister libraries, which is only
`sdl2::image` at this point.

> name: sdl2::all

## Examples

> name: sdl2>examples>

See the `minimal` example within this project at `examples/minimal` for a simple example
of how to use this project.

> name: sdl2>examples>
> name: sdl2>examples>
