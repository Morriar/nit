# Portable game and multimedia framework for Nit

> match: android::game

_gamnit_ is a modular framework to create portable 2D or 3D apps in Nit.
It is based on the portability framework _app.nit_ and the OpenGL ES 2.0 standard.

> match: gamnit
> match: gamnit>
> match: gamnit::gamnit
> match: app
> match: android>nit_compile>android>app>
> match: app>
> match: app::app
> match: ios::app
> match: app::App
> match: app
> match: android>nit_compile>android>app>
> match: app>
> match: app::app
> match: ios::app
> match: app::App

## System configuration

To compile the _gamnit_ apps packaged with the Nit repository on GNU/Linux you need to install the dev version of a few libraries and some tools.
On Debian 8.2, this command should install everything needed:

> match: gamnit::Shader::compile
> match: gamnit
> match: gamnit>
> match: gamnit::gamnit
> match: app
> match: android>nit_compile>android>app>
> match: app>
> match: app::app
> match: ios::app
> match: app::App
> match: linux
> match: linux>
> match: linux::linux

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
> match: ios>
> match: java::io
> match: ios::ios
> match: app
> match: android>nit_compile>android>app>
> match: app>
> match: app::app
> match: ios::app
> match: app::App
> match: gamnit::GamnitDisplay::setup
> match: gamnit::Shader

~~~bash
brew install glslang
~~~

## Services by submodules

> match: android>service>
> match: android::service

_gamnit_ is modular, different services of the framework are available through different submodules:

> match: gamnit
> match: gamnit>
> match: gamnit::gamnit
> match: android>service>
> match: android::service
> match: gamnit::flat_core::GroupedArray::available

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

> match: android>nit_compile>android>app>src>main>
> match: android>service>
> match: android::service
> match: gamnit::textures
> match: gamnit::Texture
> match: gamnit::dynamic_resolution::DynamicContext::texture
> match: gamnit::dynamic_resolution::DynamicResolutionProgram::texture
> match: gamnit::Sprite::texture
> match: gamnit::flat_core::Simple2dProgram::texture
> match: gamnit::flat_core::SpriteContext::texture
> match: gamnit::ParticleSystem::texture
> match: gamnit::ParticleProgram::texture
> match: gamnit::shadow::LightPointOfViewProgram::texture
> match: gamnit::TileSet::texture
> match: gamnit::RoundButton::texture
> match: gamnit::Shader
> match: gamnit::programs
> match: gamnit::ShaderVariable::program
> match: gamnit::programs::ShaderVariableMap::program
> match: gamnit::ParticleSystem::program
> match: android::game
> match: gamnit::flat_core::App::update
> match: mnit::input
> match: gamnit::GamnitProgram::use
> match: android::game
> match: gamnit::flat_core::App::sprites
> match: gamnit::flat_core::Point3d::sprites
> match: gamnit::flat_core::SpriteContext::sprites
> match: gamnit::TextSprites::sprites
> match: gamnit::virtual_gamepad::VirtualGamepad::sprites
> match: gamnit::virtual_gamepad::RoundControl::sprites
> match: gamnit::Sprite
> match: gamnit::client
> match: gamnit::Server::clients
> match: gamnit::flat_core::App::update
> match: android::game
> match: gamnit::CustomTexture::fill
> match: core::list
> match: core::List
> match: gamnit::flat_core::App::sprites
> match: gamnit::flat_core::Point3d::sprites
> match: gamnit::flat_core::SpriteContext::sprites
> match: gamnit::TextSprites::sprites
> match: gamnit::virtual_gamepad::VirtualGamepad::sprites
> match: gamnit::virtual_gamepad::RoundControl::sprites
> match: gamnit::Sprite
> match: gamnit::ObjDef::objects
> match: core::Object
> match: gamnit::flat_core::SpriteSet::draw
> match: gamnit::flat_core::SpriteContext::draw
> match: gamnit::Material::draw
> match: gamnit::ParticleSystem::draw
> match: core::list
> match: core::List
> match: gamnit::flat_core::App::sprites
> match: gamnit::flat_core::Point3d::sprites
> match: gamnit::flat_core::SpriteContext::sprites
> match: gamnit::TextSprites::sprites
> match: gamnit::virtual_gamepad::VirtualGamepad::sprites
> match: gamnit::virtual_gamepad::RoundControl::sprites
> match: gamnit::Sprite
> match: android::game
> match: geometry::Point
> match: gamnit::cameras::CameraAnchor::camera
> match: gamnit::LightCastingShadows::camera
> match: gamnit::BlinnPhongProgram::camera
> match: gamnit::cameras
> match: gamnit::Camera
> match: core::Set
> match: core::list
> match: core::List
> match: android>ui>
> match: ios>ui>
> match: android::ui
> match: app::ui
> match: linux::ui
> match: ios::ui
> match: gamnit::flat_core::App::sprites
> match: gamnit::flat_core::Point3d::sprites
> match: gamnit::flat_core::SpriteContext::sprites
> match: gamnit::TextSprites::sprites
> match: gamnit::virtual_gamepad::VirtualGamepad::sprites
> match: gamnit::virtual_gamepad::RoundControl::sprites
> match: gamnit::Sprite
> match: geometry::Point
> match: gamnit::cameras::CameraAnchor::camera
> match: gamnit::LightCastingShadows::camera
> match: gamnit::BlinnPhongProgram::camera
> match: gamnit::cameras
> match: gamnit::Camera
> match: gamnit::AbsoluteSubtexture::top
> match: gamnit::UICamera::top
> match: gamnit::AbsoluteSubtexture::left
> match: gamnit::VirtualGamepadSpritesheet::left
> match: gamnit::UICamera::left
> match: gamnit::display
> match: gamnit::Camera::display
> match: gamnit::gamnit::App::display
> match: gamnit::CheckerTexture::size
> match: gamnit::ShaderVariable::size
> match: gamnit::BMFont::size
> match: android::game
> match: app>doc>
> match: gamnit::Server::clients
> match: gamnit::client
> match: android::game
> match: gamnit::CustomTexture::fill
> match: android>ui>
> match: ios>ui>
> match: android::ui
> match: app::ui
> match: linux::ui
> match: ios::ui
> match: gamnit::Animation::frames
> match: core::list
> match: core::List
> match: gamnit::Camera::position
> match: gamnit::Light::position
> match: gamnit::Sprite::rotation
> match: gamnit::ShadowDepthProgram::rotation
> match: gamnit::SelectionProgram::rotation
> match: android>service>
> match: android::service
> match: gamnit
> match: gamnit>
> match: gamnit::gamnit
> match: gamnit::keys
> match: gamnit::VirtualGamepadSpritesheet::key
> match: android>service>
> match: android::service
> match: msgpack::read
> match: gamnit::MtlFileParser::parse
> match: gamnit::ObjFileParser::parse
> match: gamnit::more_models::Sys::models
> match: gamnit::Model
> match: gamnit::Actor::model
> match: gamnit>virtual_gamepad>assets>
> match: fonts_showcase>assets>
> match: template>assets>
> match: sdl2>examples>minimal>assets>
> match: android::assets
> match: app::assets
> match: ios::assets
> match: app::Asset
> match: gamnit::client
> match: gamnit::Server::clients
> match: gamnit::server
> match: gamnit::Server
> match: android::game

