# `gamnit` - Portable game and multimedia framework for Nit

_gamnit_ is a modular framework to create portable 2D or 3D apps in Nit.
It is based on the portability framework _app.nit_ and the OpenGL ES 2.0 standard.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Dependencies

This project requires the following packages:

[[parents: gamnit]]

### Run `texture_atlas_parser`

[[uml: gamnit | format: svg, mentities: gamnit::landscape;gamnit::portrait;gamnit::common;gamnit::camera_control;gamnit::network;gamnit::vr;gamnit::android19;gamnit::gamnit_ios;gamnit::display;gamnit::flat;gamnit::keys;gamnit::depth_core;gamnit::limit_fps;gamnit::camera_control_linux;gamnit::input_ios;gamnit::display_ios;gamnit::gamnit;gamnit::display_android;gamnit::font;gamnit::cardboard;gamnit::stereoscopic_view;gamnit::texture_atlas_parser;gamnit::client;gamnit::cameras_cache;gamnit::depth;gamnit::mtl;gamnit::gamnit_linux;gamnit::camera_control_android;gamnit::display_linux;gamnit::server;gamnit::particles;gamnit::tileset;gamnit::virtual_gamepad_spritesheet;gamnit::obj;gamnit::more_lights;gamnit::gamnit_android;gamnit::model_parser_base;gamnit::model_dimensions;gamnit::textures;gamnit::egl;gamnit::selection;gamnit::more_meshes;gamnit::dynamic_resolution;gamnit::virtual_gamepad;gamnit::programs;gamnit::cameras;gamnit::bmfont;gamnit::shadow;gamnit::more_models;gamnit::more_materials;gamnit::flat_core]]

Compile `texture_atlas_parser` with the following command:

[[main-compile: gamnit::texture_atlas_parser]]

Then run it with:

[[main-run: gamnit::texture_atlas_parser]]

## System configuration

To compile the _gamnit_ apps packaged with the Nit repository on GNU/Linux you need to install the dev version of a few libraries and some tools.
On Debian 8.2, this command should install everything needed:

~~~bash
apt-get install libgles2-mesa-dev libsdl2-dev libsdl2-image-dev libsdl2-mixer-dev inkscape
~~~

On Windows 64 bits, using msys2, you can install the required packages with:

~~~bash
pacman -S mingw-w64-x86_64-angleproject-git mingw-w64-x86_64-SDL2 mingw-w64-x86_64-SDL2_image mingw-w64-x86_64-SDL2_mixer
~~~

While macOS isn't supported, it can create iOS apps.
You need to install and setup Xcode, and you may install the GLSL shader validation tool via `brew`:

~~~bash
brew install glslang
~~~

## Services by submodules

_gamnit_ is modular, different services of the framework are available through different submodules:

* The main entrypoint `gamnit` provides low-level abstractions over some services of OpenGL ES 2.0, like textures, shaders and programs.
  It defines the basic methods to implement in order to obtain a working game:
  `App::frame_core` to update the screen and `App::accept_event` to receive user inputs.

* `flat` provides an easy to use API for 2D games based on sprites.
  Clients of this API redefine `App::update` to update the game logic and fill lists of sprites with objects to draw.

  `App::sprites` lists the sprites of the game world, they are drawn form the point of view of the `world_camera`.
  This camera can be moved around in the world by updating the x and y of its `position`,
  and the zoom can easily be set using `reset_depth(desired_world_units_on_y)` or the `z` of its `position`

  `App::ui_sprites` lists the UI sprites drawn from the point of view of `ui_camera`.
  By default, this camera is pixel-perfect with the origin in the top left corner of the window.
  However to support screens with different DPI, it is recommended to standardize
  the display size using `reset_depth(height_of_reference_display)`.

* `depth` defines an API for 3D games based on instances of `Actor`.

  This framework is build upon `flat`, see the doc of this submodule first (just above).
  As such, clients should still implement `update` with the game logic, and fill `ui_sprites` for UI elements.

  At each frame, elements in the list `actors` are drawn to screen.
  Each `Actor` is composed of a `Model` and other information specific to this instance:
  position in the world, rotation and scaling.

* `limit_fps` refines existing services of _gamnit_ to limit the framerate to a customizable value.

* `keys` provides `app.pressed_keys` keeping track of the currently pressed keys.

* `model_parsers` provides services to read and parse models from the asset folder.

* `network` provides a simple communication framework for multiplayer client/server games.

## Authors

This project is maintained by [[ini-maintainer: gamnit]].
