# Portable game and multimedia framework for Nit

_gamnit_ is a modular framework to create portable 2D or 3D apps in Nit.
It is based on the portability framework _app.nit_ and the OpenGL ES 2.0 standard.

> match: gamnit
> match: gamnit::gamnit
> match: app
> match: opengles

## System configuration

To compile the _gamnit_ apps packaged with the Nit repository on GNU/Linux you need to install the dev version of a few libraries and some tools.
On Debian 8.2, this command should install everything needed:

> match: gamnit
> match: gamnit::gamnit
> match: linux

~~~bash
apt-get install libgles2-mesa-dev libsdl2-dev libsdl2-image-dev libsdl2-mixer-dev inkscape
~~~

On Windows 64 bits, using msys2, you can install the required packages with:

~~~bash
pacman -S mingw-w64-x86_64-angleproject-git mingw-w64-x86_64-SDL2 mingw-w64-x86_64-SDL2_image mingw-w64-x86_64-SDL2_mixer
~~~

While macOS isn't supported, it can create iOS apps.
You need to install and setup Xcode, and you may install the GLSL shader validation tool via `brew`:

> match: ios

~~~bash
brew install glslang
~~~

## Services by submodules

_gamnit_ is modular, different services of the framework are available through different submodules:

> match: gamnit
> match: gamnit::gamnit

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

> match: gamnit::Camera
> match: gamnit::Sprite
> match: gamnit::Actor
> match: gamnit::Model
> match: gamnit::Server
> match: gamnit::keys
> match: gamnit
> match: gamnit::flat_core::App::world_camera
> match: gamnit>model_parsers>
> match: gamnit::keys::App::pressed_keys
> match: gamnit::depth_core::App::actors
> match: gamnit::flat_core::App::ui_camera
> match: gamnit::gamnit::App::frame_core
> match: gamnit::Light::position
> match: gamnit::Camera::position
> match: gamnit::ObjDef::objects
> match: gamnit::GamnitProgram::use
> match: gamnit::textures
> match: gamnit::gamnit
> match: gamnit::programs
> match: gamnit::more_models::Sys::models
> match: gamnit::display
> match: gamnit::client
> match: gamnit::server
> match: gamnit::Texture
> match: gamnit::Shader
> match: gamnit::flat_core::App::sprites
> match: gamnit::flat_core::App::update
> match: gamnit>flat>
> match: gamnit::virtual_gamepad::VirtualGamepad::sprites
> match: gamnit::TextSprites::sprites
> match: gamnit::LightCastingShadows::camera
> match: gamnit::virtual_gamepad::RoundControl::sprites
> match: gamnit::cameras::CameraAnchor::camera
> match: gamnit::BlinnPhongProgram::camera
> match: gamnit::flat_core::SpriteContext::sprites
> match: gamnit::flat_core::Point3d::sprites
> match: gamnit>network>
> match: gamnit::limit_fps
> match: gamnit::Vec3::z
> match: gamnit::gamnit::App::accept_event
> match: gamnit::AbsoluteSubtexture::top
> match: gamnit::MtlFileParser::parse
> match: gamnit::ObjFileParser::parse
> match: gamnit::UICamera::top
> match: gamnit::Material::draw
> match: gamnit::Sprite::rotation
> match: gamnit::ShadowDepthProgram::rotation
> match: gamnit::SelectionProgram::rotation
> match: gamnit::ParticleSystem::draw
> match: gamnit::flat_core::SpriteContext::draw
> match: gamnit::flat_core::SpriteSet::draw
> match: gamnit>depth>

