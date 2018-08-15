# Portable game and multimedia framework for Nit

> match: gamnit>depth>
> match: gamnit
> match: gamnit>flat>
> match: gamnit::depth_core
> match: gamnit::Actor
> match: gamnit>network>
> match: gamnit>virtual_gamepad>
> match: gamnit::Sprite
> match: gamnit::client
> match: gamnit::server
> match: gamnit::shadow
> match: gamnit::flat_core

_gamnit_ is a modular framework to create portable 2D or 3D apps in Nit.
It is based on the portability framework _app.nit_ and the OpenGL ES 2.0 standard.

> match: gamnit::GamnitGLKView
> match: gamnit::GamnitIOSPointerEvent
> match: gamnit
> match: gamnit::gamnit_ios
> match: gamnit>depth>
> match: gamnit>network>
> match: gamnit::Actor
> match: gamnit::gamnit_linux
> match: gamnit>flat>
> match: gamnit::Shader
> match: gamnit::depth_core
> match: gamnit::display_android
> match: gamnit>virtual_gamepad>
> match: gamnit::Sprite
> match: gamnit::gamnit_android
> match: gamnit::model_parser_base
> match: gamnit::GamnitOtherEvent
> match: gamnit::vr
> match: gamnit::BlinnPhongProgram
> match: gamnit::Texture
> match: gamnit::Model
> match: gamnit::AbsoluteSubtexture
> match: gamnit::RelativeSubtexture
> match: gamnit::Mesh
> match: gamnit::Cuboid
> match: gamnit::ParticleProgram
> match: gamnit::input_ios
> match: gamnit::Animation
> match: gamnit::display_ios
> match: gamnit::Material
> match: gamnit::selection
> match: gamnit::display_linux
> match: gamnit::bmfont
> match: gamnit::server
> match: gamnit::particles
> match: gamnit::textures
> match: gamnit::flat_core

## System configuration

> match: gamnit::ParticleSystem
> match: gamnit
> match: gamnit::particles

To compile the _gamnit_ apps packaged with the Nit repository on GNU/Linux you need to install the dev version of a few libraries and some tools.
On Debian 8.2, this command should install everything needed:

> match: gamnit::GamnitGLKView
> match: gamnit
> match: gamnit::GamnitIOSPointerEvent
> match: gamnit::gamnit_ios
> match: gamnit::gamnit_linux
> match: gamnit>flat>
> match: gamnit>network>
> match: gamnit::Shader
> match: gamnit::gamnit_android
> match: gamnit>depth>
> match: gamnit::more_models::BuildModelFromObj
> match: gamnit::GamnitOtherEvent
> match: gamnit::vr
> match: gamnit::Actor
> match: gamnit::Texture
> match: gamnit::GamnitProgram
> match: gamnit::ParticleProgram
> match: gamnit::display_android
> match: gamnit::Sprite
> match: gamnit::ParticleSystem
> match: gamnit::input_ios
> match: gamnit::display_ios
> match: gamnit::selection
> match: gamnit::bmfont
> match: gamnit::display_linux
> match: gamnit::egl

~~~bash
apt-get install libgles2-mesa-dev libsdl2-dev libsdl2-image-dev libsdl2-mixer-dev inkscape
~~~

On Windows 64 bits, using msys2, you can install the required packages with:

> match: gamnit::GamnitDisplay::blue_bits
> match: gamnit::GamnitDisplay::green_bits
> match: gamnit::GamnitDisplay::red_bits
> match: gamnit
> match: gamnit::BMFontAsset::desc
> match: gamnit::flat_core::SpriteContext::resize_ratio
> match: gamnit::flat_core::SpriteContext::draw
> match: gamnit::Sprite::tint
> match: gamnit::CustomTexture::[]=
> match: gamnit::Sprite::needs_remap
> match: gamnit::VirtualGamepad::add_dpad
> match: gamnit::display_android
> match: gamnit::bmfont

~~~bash
pacman -S mingw-w64-x86_64-angleproject-git mingw-w64-x86_64-SDL2 mingw-w64-x86_64-SDL2_image mingw-w64-x86_64-SDL2_mixer
~~~

While macOS isn't supported, it can create iOS apps.
You need to install and setup Xcode, and you may install the GLSL shader validation tool via `brew`:

> match: gamnit::Shader
> match: gamnit
> match: gamnit::Texture
> match: gamnit>flat>
> match: gamnit::UniformMat4
> match: gamnit::more_models::BuildModelFromObj
> match: gamnit::Material
> match: gamnit::Mesh
> match: gamnit::gamnit_ios
> match: gamnit::VertexShader
> match: gamnit::InactiveVariable
> match: gamnit::GamnitIOSPointerEvent
> match: gamnit::FragmentShader
> match: gamnit::GamnitProgramFromSource
> match: gamnit::vr
> match: gamnit::NormalProgram
> match: gamnit>network>
> match: gamnit>virtual_gamepad>
> match: gamnit::input_ios
> match: gamnit::ParticleSystem
> match: gamnit::AbsoluteSubtexture
> match: gamnit::RelativeSubtexture
> match: gamnit::android19
> match: gamnit::Model
> match: gamnit::Cuboid
> match: gamnit::display_android
> match: gamnit::ParticleProgram
> match: gamnit::Animation
> match: gamnit::display_ios
> match: gamnit::bmfont
> match: gamnit::selection
> match: gamnit::gamnit_linux
> match: gamnit::tileset
> match: gamnit::gamnit_android
> match: gamnit::programs
> match: gamnit::server
> match: gamnit::particles
> match: gamnit::textures

~~~bash
brew install glslang
~~~

## Services by submodules

> match: gamnit::common
> match: gamnit
> match: gamnit::mtl
> match: gamnit::obj
> match: gamnit::model_parser_base
> match: gamnit::programs
> match: gamnit::more_models

_gamnit_ is modular, different services of the framework are available through different submodules:

> match: gamnit::GamnitGLKView
> match: gamnit::GamnitIOSPointerEvent
> match: gamnit
> match: gamnit::gamnit
> match: gamnit::gamnit_ios
> match: gamnit::gamnit_linux
> match: gamnit::SpriteSet
> match: gamnit>network>
> match: gamnit::network
> match: gamnit::Shader
> match: gamnit>depth>
> match: gamnit::UICamera
> match: gamnit::gamnit_android
> match: gamnit::GamnitOtherEvent
> match: gamnit::more_models::BuildModelFromObj
> match: gamnit::vr
> match: gamnit>virtual_gamepad>
> match: gamnit::Actor
> match: gamnit::display
> match: gamnit::keys
> match: gamnit::depth_core
> match: gamnit::Animation
> match: gamnit::Sprite
> match: gamnit::input_ios
> match: gamnit::display_ios
> match: gamnit::display_android
> match: gamnit::font
> match: gamnit::depth
> match: gamnit::selection
> match: gamnit::client
> match: gamnit::virtual_gamepad
> match: gamnit::display_linux
> match: gamnit::server
> match: gamnit::model_dimensions
> match: gamnit::cameras
> match: gamnit::flat_core

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

> match: gamnit::Shader
> match: gamnit::GamnitGLKView
> match: gamnit
> match: gamnit::GamnitIOSPointerEvent
> match: gamnit::SelectionProgram
> match: gamnit::TextureSet
> match: gamnit::TextureAsset
> match: gamnit::ExplosionProgram
> match: gamnit::flat_core::Simple2dProgram
> match: gamnit::Texture
> match: gamnit::NormalProgram
> match: gamnit::RootTexture
> match: gamnit::ParticleProgram
> match: gamnit::gamnit_ios
> match: gamnit::CheckerTexture
> match: gamnit>flat>
> match: gamnit::input_ios
> match: gamnit>network>
> match: gamnit::Animation
> match: gamnit::gamnit_linux
> match: gamnit::display_android
> match: gamnit::InactiveVariable
> match: gamnit::texture_atlas_parser
> match: gamnit::Sprite
> match: gamnit::GamnitProgram
> match: gamnit::GamnitProgramFromSource
> match: gamnit::UICamera
> match: gamnit::Actor
> match: gamnit>depth>
> match: gamnit::Subtexture
> match: gamnit::gamnit_android
> match: gamnit::VirtualGamepad
> match: gamnit::Material
> match: gamnit::ParticleSystem
> match: gamnit::GamnitInputEvent
> match: gamnit::camera_control
> match: gamnit>virtual_gamepad>
> match: gamnit::VertexShader
> match: gamnit::GamnitOtherEvent
> match: gamnit::more_models::BuildModelFromObj
> match: gamnit::FragmentShader
> match: gamnit::PointLight
> match: gamnit::vr
> match: gamnit::programs
> match: gamnit::LeafModel
> match: gamnit::MtlDef
> match: gamnit::selection
> match: gamnit::CustomTexture
> match: gamnit::GamnitQuitEvent
> match: gamnit::shadow::LightPointOfViewProgram
> match: gamnit::textures
> match: gamnit::display
> match: gamnit::TileSetFont
> match: gamnit::keys
> match: gamnit::SmokeProgram
> match: gamnit::TileSet
> match: gamnit::GamnitKeyEvent
> match: gamnit::dynamic_resolution::DynamicContext
> match: gamnit::shadow::ShadowContext
> match: gamnit::BlinnPhongProgram
> match: gamnit::depth_core
> match: gamnit::GamnitPointerEvent
> match: gamnit::RelativeSubtexture
> match: gamnit::GamnitMouseWheelEvent
> match: gamnit::flat_core::SpriteContext
> match: gamnit::client
> match: gamnit::flat_core::GroupedArray
> match: gamnit::font
> match: gamnit::display_ios
> match: gamnit::Model
> match: gamnit::bmfont
> match: gamnit::server
> match: gamnit::dynamic_resolution
> match: gamnit::particles
> match: gamnit::display_linux
> match: gamnit::shadow
> match: gamnit::egl
> match: gamnit::model_dimensions
> match: gamnit::cameras
> match: gamnit::flat_core
> match: gamnit>flat>
> match: gamnit::TextSprites
> match: gamnit::flat_core::DrawOrderComparator
> match: gamnit
> match: gamnit::Sprite
> match: gamnit::client
> match: gamnit>depth>
> match: gamnit::Actor
> match: gamnit>network>
> match: gamnit::SpriteSet
> match: gamnit::flat_core::SpriteContext
> match: gamnit::GamnitInputEvent
> match: gamnit::flat_core::GroupedArray
> match: gamnit::model_parser_base
> match: gamnit::ObjFace
> match: gamnit::Plane
> match: gamnit::depth_core
> match: gamnit::Animation
> match: gamnit::Font
> match: gamnit::ParticleSystem
> match: gamnit::common
> match: gamnit::RemoteClient
> match: gamnit::SelectionProgram
> match: gamnit::shadow::LightPointOfViewProgram
> match: gamnit::CustomTexture
> match: gamnit::ShadowDepthProgram
> match: gamnit::android19
> match: gamnit::LeafModel
> match: gamnit::UICamera
> match: gamnit::NormalProgram
> match: gamnit::display_android
> match: gamnit::Texture
> match: gamnit::flat_core
> match: gamnit::Material
> match: gamnit::selection
> match: gamnit::server
> match: gamnit::font
> match: gamnit::shadow
> match: gamnit::bmfont
> match: gamnit::particles
> match: gamnit::tileset
> match: gamnit::Camera
> match: gamnit::TextSprites
> match: gamnit::SpriteSet
> match: gamnit::PointLight
> match: gamnit::more_lights::ParallelLightCamera
> match: gamnit::TextureSet
> match: gamnit>flat>
> match: gamnit::flat_core::DrawOrderComparator
> match: gamnit::camera_control
> match: gamnit::Sprite
> match: gamnit::TileSet
> match: gamnit
> match: gamnit::TileSetFont
> match: gamnit::camera_control_linux
> match: gamnit::Actor
> match: gamnit::stereoscopic_view
> match: gamnit::shadow::LightPointOfViewProgram
> match: gamnit::camera_control_android
> match: gamnit::cameras::OffsetPoint3d
> match: gamnit::cameras_cache
> match: gamnit::cameras::CameraAnchor
> match: gamnit::ShadowDepthProgram
> match: gamnit>depth>
> match: gamnit::flat_core::SpriteContext
> match: gamnit::Animation
> match: gamnit::flat_core::GroupedArray
> match: gamnit::ModelAsset
> match: gamnit::UICamera
> match: gamnit::Font
> match: gamnit::ParticleSystem
> match: gamnit::Texture
> match: gamnit::SelectionProgram
> match: gamnit::EulerCamera
> match: gamnit::cameras
> match: gamnit::cardboard
> match: gamnit::Material
> match: gamnit::GamnitInputEvent
> match: gamnit::LeafModel
> match: gamnit>network>
> match: gamnit::depth_core
> match: gamnit::UVSphere
> match: gamnit::keys
> match: gamnit::Model
> match: gamnit::CustomTexture
> match: gamnit::server
> match: gamnit::client
> match: gamnit::font
> match: gamnit::selection
> match: gamnit::particles
> match: gamnit::tileset
> match: gamnit::shadow
> match: gamnit::bmfont
> match: gamnit::dynamic_resolution
> match: gamnit::flat_core
> match: gamnit::Camera
> match: gamnit::display
> match: gamnit::GamnitDisplay
> match: gamnit::PointLight
> match: gamnit::more_lights::ParallelLightCamera
> match: gamnit::TextSprites
> match: gamnit::flat_core::DrawOrderComparator
> match: gamnit::camera_control
> match: gamnit::Sprite
> match: gamnit
> match: gamnit>flat>
> match: gamnit::camera_control_linux
> match: gamnit::UICamera
> match: gamnit::shadow::LightPointOfViewProgram
> match: gamnit::display_ios
> match: gamnit::stereoscopic_view
> match: gamnit::display_android
> match: gamnit::cameras_cache
> match: gamnit::camera_control_android
> match: gamnit::SpriteSet
> match: gamnit::display_linux
> match: gamnit::cameras::CameraAnchor
> match: gamnit::ShadowDepthProgram
> match: gamnit::Font
> match: gamnit::ParticleSystem
> match: gamnit>virtual_gamepad>
> match: gamnit::flat_core::GroupedArray
> match: gamnit::SelectionProgram
> match: gamnit::ExplosionProgram
> match: gamnit::EulerCamera
> match: gamnit::cameras
> match: gamnit::cameras::OffsetPoint3d
> match: gamnit::vr
> match: gamnit::flat_core::Simple2dProgram
> match: gamnit::SmokeProgram
> match: gamnit::flat_core::SpriteContext
> match: gamnit::GamnitInputEvent
> match: gamnit::LeafModel
> match: gamnit::BlinnPhongProgram
> match: gamnit::Model
> match: gamnit::CheckerTexture
> match: gamnit::VirtualGamepad
> match: gamnit::Actor
> match: gamnit::more_models::BuildModelFromObj
> match: gamnit::NormalsMaterial
> match: gamnit::Animation
> match: gamnit::android19
> match: gamnit::gamnit_ios
> match: gamnit::ModelAsset
> match: gamnit::Material
> match: gamnit::selection
> match: gamnit::Texture
> match: gamnit::input_ios
> match: gamnit::dynamic_resolution
> match: gamnit::font
> match: gamnit::particles
> match: gamnit::tileset
> match: gamnit::gamnit_linux
> match: gamnit::bmfont
> match: gamnit::gamnit_android
> match: gamnit::shadow
> match: gamnit>depth>
> match: gamnit::Actor
> match: gamnit::depth_core
> match: gamnit
> match: gamnit>flat>
> match: gamnit::Sprite
> match: gamnit::model_parser_base
> match: gamnit::ShadowDepthProgram
> match: gamnit::BlinnPhongProgram
> match: gamnit::MtlDef
> match: gamnit::Model
> match: gamnit::vr
> match: gamnit>network>
> match: gamnit::UniformMap
> match: gamnit::AttributeMap
> match: gamnit::ShaderVariableMap
> match: gamnit::ParticleSystem
> match: gamnit::selection
> match: gamnit::InactiveVariable
> match: gamnit::client
> match: gamnit::server
> match: gamnit::particles
> match: gamnit::shadow
> match: gamnit::flat_core
> match: gamnit>flat>
> match: gamnit::flat
> match: gamnit
> match: gamnit::client
> match: gamnit>depth>
> match: gamnit>network>
> match: gamnit::network
> match: gamnit::Sprite
> match: gamnit::GamnitProgram
> match: gamnit::ObjFace
> match: gamnit::Plane
> match: gamnit::depth_core
> match: gamnit::GamnitGLKView
> match: gamnit::ParticleSystem
> match: gamnit::common
> match: gamnit::RemoteClient
> match: gamnit::GamnitInputEvent
> match: gamnit::VirtualGamepad
> match: gamnit::Actor
> match: gamnit::TileSetFont
> match: gamnit::CustomTexture
> match: gamnit::gamnit
> match: gamnit::InactiveVariable
> match: gamnit::ParticleProgram
> match: gamnit>virtual_gamepad>
> match: gamnit::more_models::BuildModelFromObj
> match: gamnit::server
> match: gamnit::flat_core
> match: gamnit::selection
> match: gamnit::depth
> match: gamnit::Texture
> match: gamnit::font
> match: gamnit::shadow
> match: gamnit::egl
> match: gamnit::virtual_gamepad
> match: gamnit::dynamic_resolution
> match: gamnit::Actor
> match: gamnit::Model
> match: gamnit::CompositeModel
> match: gamnit::GamnitOtherEvent
> match: gamnit::LeafModel
> match: gamnit>model_parsers>
> match: gamnit::flat_core::DrawOrderComparator
> match: gamnit::ModelAsset
> match: gamnit::more_models::BuildModelFromObj
> match: gamnit
> match: gamnit::Sprite
> match: gamnit::ShadowDepthProgram
> match: gamnit>flat>
> match: gamnit::shadow::LightPointOfViewProgram
> match: gamnit::UICamera
> match: gamnit::Camera
> match: gamnit::model_dimensions
> match: gamnit::ParticleSystem
> match: gamnit::Animation
> match: gamnit::ObjVertex
> match: gamnit::model_parser_base
> match: gamnit::RoundControl
> match: gamnit::RemoteServerConfig
> match: gamnit::Mesh
> match: gamnit::Font
> match: gamnit::flat_core::Simple2dProgram
> match: gamnit::selection
> match: gamnit::SelectionProgram
> match: gamnit::CustomTexture
> match: gamnit::cameras::OffsetPoint3d
> match: gamnit::cardboard
> match: gamnit::NormalsMaterial
> match: gamnit::more_models
> match: gamnit::UniformMap
> match: gamnit::VirtualGamepad
> match: gamnit::AttributeMap
> match: gamnit::ShaderVariableMap
> match: gamnit::Texture
> match: gamnit::flat_core::GroupedArray
> match: gamnit::Material
> match: gamnit::particles
> match: gamnit::dynamic_resolution
> match: gamnit::InactiveVariable
> match: gamnit::font
> match: gamnit::tileset
> match: gamnit::bmfont
> match: gamnit::limit_fps
> match: gamnit::GamnitGLKView
> match: gamnit::GamnitIOSPointerEvent
> match: gamnit::gamnit_ios
> match: gamnit
> match: gamnit::gamnit_linux
> match: gamnit>network>
> match: gamnit::Shader
> match: gamnit::gamnit_android
> match: gamnit::InactiveAttribute
> match: gamnit::InactiveUniform
> match: gamnit::GamnitOtherEvent
> match: gamnit::more_models::BuildModelFromObj
> match: gamnit::vr
> match: gamnit::CustomTexture
> match: gamnit::Actor
> match: gamnit::display
> match: gamnit::ParticleProgram
> match: gamnit::keys
> match: gamnit::Sprite
> match: gamnit::UICamera
> match: gamnit::SelectionProgram
> match: gamnit::Attribute
> match: gamnit::Vec3
> match: gamnit::InactiveVariable
> match: gamnit::Animation
> match: gamnit::Vec4
> match: gamnit::NormalsMaterial
> match: gamnit::input_ios
> match: gamnit::display_ios
> match: gamnit::display_android
> match: gamnit::selection
> match: gamnit::font
> match: gamnit::stereoscopic_view
> match: gamnit::client
> match: gamnit::display_linux
> match: gamnit::server
> match: gamnit::model_dimensions
> match: gamnit::cameras
> match: gamnit::flat_core
> match: gamnit::keys
> match: gamnit
> match: gamnit::VirtualGamepad
> match: gamnit>virtual_gamepad>
> match: gamnit::flat_core::GroupedArray
> match: gamnit>model_parsers>
> match: gamnit>virtual_gamepad>assets>
> match: gamnit::Model
> match: gamnit
> match: gamnit::TextureAsset
> match: gamnit::BMFontAsset
> match: gamnit::Texture
> match: gamnit::Mesh
> match: gamnit::model_dimensions
> match: gamnit::model_parser_base
> match: gamnit::Actor
> match: gamnit::ModelAsset
> match: gamnit::more_models::BuildModelFromObj
> match: gamnit::Material
> match: gamnit::LeafModel
> match: gamnit::flat_core::Simple2dProgram
> match: gamnit::more_models
> match: gamnit::BMFont
> match: gamnit>virtual_gamepad>
> match: gamnit::BlinnPhongProgram
> match: gamnit::ObjFileParser
> match: gamnit::display
> match: gamnit::keys
> match: gamnit::NormalsMaterial
> match: gamnit::Animation
> match: gamnit::gamnit_ios
> match: gamnit::UICamera
> match: gamnit::font
> match: gamnit::texture_atlas_parser
> match: gamnit::client
> match: gamnit::mtl
> match: gamnit::gamnit_linux
> match: gamnit::server
> match: gamnit::obj
> match: gamnit::gamnit_android
> match: gamnit::selection
> match: gamnit::bmfont
> match: gamnit::cameras
> match: gamnit::flat_core
> match: gamnit>network>
> match: gamnit::flat_core::Simple2dProgram
> match: gamnit
> match: gamnit>depth>
> match: gamnit>flat>
> match: gamnit::depth_core
> match: gamnit::RoundButton
> match: gamnit::Material
> match: gamnit::SmoothMaterial
> match: gamnit::Plane
> match: gamnit::EulerCamera
> match: gamnit::camera_control
> match: gamnit::Model
> match: gamnit::Actor
> match: gamnit::NormalsMaterial
> match: gamnit>virtual_gamepad>
> match: gamnit::client
> match: gamnit::Sprite
> match: gamnit::InactiveVariable
> match: gamnit::keys
> match: gamnit::server
> match: gamnit::selection
> match: gamnit::more_meshes
> match: gamnit::shadow
> match: gamnit::flat_core

