# Low-level wrapper of the SDL 2.0 library (as `sdl2`) and SDL_image 2.0 (as `sdl2::image`)

[[toc: sdl2]]

The main entry point of this project, [[sdl2 | text: `sdl2`]], exposes some features of the base
library: video, events, syswm, etc. The alternative entry point `sdl2::image` offers
mainly `SDLSurface::load` to load images from PNG, JPG or TIF files.

You can also import `sdl2::all` to get `sdl2` and all its sister libraries, which is only
`sdl2::image` at this point.

Example from `sdl2::minimal`:

[[code: sdl2::minimal]]

[[uml: sdl2 | format: svg, mentities: sdl2::all;sdl2::sdl2;sdl2::syswm;sdl2::image;sdl2::mixer;sdl2::events;sdl2::sdl2_base]]

[[features: sdl2 | mentities: sdl2::all;sdl2::sdl2;sdl2::syswm;sdl2::image;sdl2::mixer;sdl2::events;sdl2::sdl2_base]]

## [[sign: sdl2::image]]

> [[doc: sdl2::image]]

## [[sign: sdl2::mixer]]

> [[doc: sdl2::mixer]]

## [[sign: sdl2::SDLSysWMInfo]]

> [[doc: sdl2::SDLSysWMInfo]]

## [[sign: sdl2::SDLMouseButtonEvent]]

> [[doc: sdl2::SDLMouseButtonEvent]]

## [[sign: sdl2::SDLEventBuffer]]

> [[doc: sdl2::SDLEventBuffer]]

## Examples

See the `minimal` example within this project at `examples/minimal` for a simple example
of how to use this project.

## Authors

This project is maintained by [[ini-maintainer: sdl2]].
