# Low-level wrapper of the SDL 2.0 library (as `sdl2`) and SDL_image 2.0 (as `sdl2::image`)

> match: sdl2
> match: sdl2::image
> match: sdl2::SDL
> match: sdl2::all
> match: sdl2::sdl2_base
> match: sdl2::IMG
> match: sdl2::Mix
> match: sdl2::SDLWindow
> match: sdl2::mixer
> match: sdl2::SDLEvent
> match: sdl2::syswm
> match: sdl2::SDLEventBuffer
> match: sdl2::minimal
> match: sdl2::events

The main entry point of this project, `sdl2`, exposes some features of the base
library: video, events, syswm, etc. The alternative entry point `sdl2::image` offers
mainly `SDLSurface::load` to load images from PNG, JPG or TIF files.

> match: sdl2::SDLSurface
> match: sdl2::syswm
> match: sdl2
> match: sdl2::image
> match: sdl2::SDLWindowEvent
> match: sdl2::SDLMouseEvent
> match: sdl2::SDLKeyboardEvent
> match: sdl2::SDLMouseWheelEvent
> match: sdl2::SDLKeyboardUpEvent
> match: sdl2::SDLMouseButtonUpEvent
> match: sdl2::SDLKeyboardDownEvent
> match: sdl2::SDLQuitEvent
> match: sdl2::all
> match: sdl2::sdl2_base
> match: sdl2::IMG
> match: sdl2::events
> match: sdl2::Mix
> match: sdl2::SDL
> match: sdl2::MixChunk
> match: sdl2::MixMusic
> match: sdl2::SDLPoint
> match: sdl2::SDLEventBuffer
> match: sdl2::mixer
> match: sdl2::SDLEvent
> match: sdl2::minimal
> match: sdl2::SDLMouseMotionEvent
> match: sdl2::SDLMouseButtonDownEvent
> match: sdl2::SDLMouseButtonEvent

You can also import `sdl2::all` to get `sdl2` and all its sister libraries, which is only
`sdl2::image` at this point.

> match: sdl2::image
> match: sdl2
> match: sdl2::all
> match: sdl2::IMG
> match: sdl2::Mix
> match: sdl2::SDL
> match: sdl2::mixer
> match: sdl2::SDLPoint
> match: sdl2::SDLEvent
> match: sdl2::minimal

## Examples

> match: sdl2>examples>
> match: sdl2
> match: sdl2::minimal

See the `minimal` example within this project at `examples/minimal` for a simple example
of how to use this project.

> match: sdl2>examples>minimal>
> match: sdl2>examples>
> match: sdl2::SDL::show_simple_message_box
> match: sdl2::SDLWindow::show_simple_message_box
> match: sdl2
> match: sdl2::minimal
> match: sdl2::SDL::relative_mouse_mode=

