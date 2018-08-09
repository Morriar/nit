# Portable game and multimedia framework for Nit

> name: android::game

_gamnit_ is a modular framework to create portable 2D or 3D apps in Nit.
It is based on the portability framework _app.nit_ and the OpenGL ES 2.0 standard.

> name: gamnit
> name: app
> name: android>nit_compile>android>app>
> name: ios::app
> name: app::App
> name: app
> name: android>nit_compile>android>app>
> name: ios::app
> name: app::App

## System configuration

To compile the _gamnit_ apps packaged with the Nit repository on GNU/Linux you need to install the dev version of a few libraries and some tools.
On Debian 8.2, this command should install everything needed:

> name: gamnit::Shader::compile
> name: gamnit
> name: app
> name: linux
> name: android>nit_compile>android>app>
> name: ios::app
> name: app::App

~~~bash
apt-get install libgles2-mesa-dev libsdl2-dev libsdl2-image-dev libsdl2-mixer-dev inkscape
~~~

On Windows 64 bits, using msys2, you can install the required packages with:

~~~bash
pacman -S mingw-w64-x86_64-angleproject-git mingw-w64-x86_64-SDL2 mingw-w64-x86_64-SDL2_image mingw-w64-x86_64-SDL2_mixer
~~~

While macOS isn't supported, it can create iOS apps.
You need to install and setup Xcode, and you may install the GLSL shader validation tool via `brew`:

> name: ios
> name: app
> name: android>nit_compile>android>app>
> name: java::io
> name: app::App
> name: gamnit::Shader
> name: gamnit::GamnitDisplay::setup

~~~bash
brew install glslang
~~~

## Services by submodules

> name: android>service>

_gamnit_ is modular, different services of the framework are available through different submodules:

> name: gamnit
> name: android>service>
> name: gamnit::flat_core::GroupedArray::available

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

> name: android>nit_compile>android>app>src>main>
> name: android>service>
> name: gamnit::textures
> name: gamnit::programs
> name: gamnit::Texture
> name: gamnit::Shader
> name: gamnit::dynamic_resolution::DynamicContext::texture
> name: gamnit::dynamic_resolution::DynamicResolutionProgram::texture
> name: gamnit::Sprite::texture
> name: gamnit::flat_core::Simple2dProgram::texture
> name: gamnit::flat_core::SpriteContext::texture
> name: gamnit::ParticleSystem::texture
> name: gamnit::ParticleProgram::texture
> name: gamnit::shadow::LightPointOfViewProgram::texture
> name: gamnit::TileSet::texture
> name: gamnit::RoundButton::texture
> name: gamnit::ShaderVariable::program
> name: gamnit::programs::ShaderVariableMap::program
> name: gamnit::ParticleSystem::program
> name: android::game
> name: gamnit::flat_core::App::update
> name: mnit::input
> name: android::game
> name: gamnit::Sprite
> name: gamnit::GamnitProgram::use
> name: gamnit::flat_core::App::sprites
> name: gamnit::flat_core::Point3d::sprites
> name: gamnit::flat_core::SpriteContext::sprites
> name: gamnit::TextSprites::sprites
> name: gamnit::virtual_gamepad::VirtualGamepad::sprites
> name: gamnit::virtual_gamepad::RoundControl::sprites
> name: gamnit::client
> name: gamnit::Server::clients
> name: android::game
> name: core::list
> name: core::List
> name: gamnit::Sprite
> name: core::Object
> name: gamnit::flat_core::App::update
> name: gamnit::CustomTexture::fill
> name: gamnit::flat_core::App::sprites
> name: gamnit::flat_core::Point3d::sprites
> name: gamnit::flat_core::SpriteContext::sprites
> name: gamnit::TextSprites::sprites
> name: gamnit::virtual_gamepad::VirtualGamepad::sprites
> name: gamnit::virtual_gamepad::RoundControl::sprites
> name: gamnit::ObjDef::objects
> name: gamnit::flat_core::SpriteSet::draw
> name: gamnit::flat_core::SpriteContext::draw
> name: gamnit::Material::draw
> name: gamnit::ParticleSystem::draw
> name: core::list
> name: android::game
> name: core::List
> name: gamnit::Sprite
> name: geometry::Point
> name: gamnit::flat_core::App::sprites
> name: gamnit::flat_core::Point3d::sprites
> name: gamnit::flat_core::SpriteContext::sprites
> name: gamnit::TextSprites::sprites
> name: gamnit::virtual_gamepad::VirtualGamepad::sprites
> name: gamnit::virtual_gamepad::RoundControl::sprites
> name: gamnit::cameras
> name: gamnit::Camera
> name: gamnit::cameras::CameraAnchor::camera
> name: gamnit::LightCastingShadows::camera
> name: gamnit::BlinnPhongProgram::camera
> name: core::Set
> name: android>ui>
> name: ios>ui>
> name: core::list
> name: app::ui
> name: linux::ui
> name: core::List
> name: gamnit::Sprite
> name: geometry::Point
> name: gamnit::flat_core::App::sprites
> name: gamnit::flat_core::Point3d::sprites
> name: gamnit::flat_core::SpriteContext::sprites
> name: gamnit::TextSprites::sprites
> name: gamnit::virtual_gamepad::VirtualGamepad::sprites
> name: gamnit::virtual_gamepad::RoundControl::sprites
> name: gamnit::cameras
> name: gamnit::Camera
> name: gamnit::cameras::CameraAnchor::camera
> name: gamnit::LightCastingShadows::camera
> name: gamnit::BlinnPhongProgram::camera
> name: gamnit::AbsoluteSubtexture::top
> name: gamnit::UICamera::top
> name: gamnit::AbsoluteSubtexture::left
> name: gamnit::VirtualGamepadSpritesheet::left
> name: gamnit::UICamera::left
> name: gamnit::display
> name: gamnit::CheckerTexture::size
> name: gamnit::ShaderVariable::size
> name: gamnit::BMFont::size
> name: android::game
> name: app>doc>
> name: gamnit::client
> name: gamnit::Server::clients
> name: android::game
> name: gamnit::CustomTexture::fill
> name: android>ui>
> name: ios>ui>
> name: app::ui
> name: linux::ui
> name: core::list
> name: core::List
> name: gamnit::Animation::frames
> name: gamnit::Camera::position
> name: gamnit::Light::position
> name: gamnit::Sprite::rotation
> name: gamnit::ShadowDepthProgram::rotation
> name: gamnit::SelectionProgram::rotation
> name: android>service>
> name: gamnit
> name: gamnit::keys
> name: gamnit::VirtualGamepadSpritesheet::key
> name: android>service>
> name: gamnit>virtual_gamepad>assets>
> name: msgpack::read
> name: gamnit::Model
> name: app::Asset
> name: gamnit::MtlFileParser::parse
> name: gamnit::ObjFileParser::parse
> name: gamnit::more_models::Sys::models
> name: gamnit::Actor::model
> name: gamnit::client
> name: gamnit::server
> name: android::game
> name: gamnit::Server
> name: gamnit::Server::clients

