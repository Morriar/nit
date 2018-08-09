# Low-level wrapper of the SDL 2.0 library (as `sdl2`) and SDL_image 2.0 (as `sdl2::image`)

> match: sdl2>
> match: sdl2
> match: sdl2::sdl2_base::Sys::sdl
> match: sdl2::all
> match: sdl2::image
> match: sdl2::SDL

The main entry point of this project, `sdl2`, exposes some features of the base
library: video, events, syswm, etc. The alternative entry point `sdl2::image` offers
mainly `SDLSurface::load` to load images from PNG, JPG or TIF files.

> match: sdl2>
> match: sdl2
> match: sdl2::image::SDLSurface::load
> match: sdl2::image
> match: sdl2::all
> match: sdl2::IMG::error
> match: sdl2::Mix::load_wav
> match: sdl2::IMG::quit
> match: sdl2::SDLInitFlags::video
> match: sdl2::SDLSurface::load_bmp
> match: core::file::NativeDir::readdir

You can also import `sdl2::all` to get `sdl2` and all its sister libraries, which is only
`sdl2::image` at this point.

> match: sdl2>
> match: sdl2
> match: sdl2::all
> match: sdl2::Mix
> match: sdl2::SDL
> match: sdl2::mixer::Sys::mix
> match: sdl2::sdl2_base::Sys::sdl
> match: sdl2::image
> match: sdl2::IMG::error
> match: sdl2::sdl2
> match: sdl2::IMG
> match: sdl2::image::SDL::img
> match: sdl2::IMG::quit
> match: core::re::NativeMatchArray::[]
> match: sdl2::IMG::initialize
> match: sdl2::mixer
> match: core::Object::output
> match: core::Writable::write_to_bytes
> match: sdl2::SDLRect::nil
> match: sdl2::SDLWindowFlags::is_shown
> match: sdl2::SDLPoint::nil
> match: core::Object::output_class_name
> match: core::ProcessDuplex
> match: core::Map
> match: core::Writable
> match: sdl2::SDLWindowFlags::has_mouse_focus
> match: sdl2::SDLWindowFlags::has_input_focus
> match: core::Finalizable::finalize
> match: core::FinalizableOnce

## Examples

> match: sdl2>examples>
> match: sdl2>
> match: sdl2

See the `minimal` example within this project at `examples/minimal` for a simple example
of how to use this project.

> match: sdl2>
> match: sdl2
> match: sdl2>examples>
> match: sdl2>examples>minimal>
> match: core::ropes::RopeCharIteratorPiece
> match: core::Process
> match: core::Couple
> match: core::Collection::count
> match: sdl2::SDL::relative_mouse_mode=

