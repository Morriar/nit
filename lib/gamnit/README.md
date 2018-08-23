# `gamnit` - Portable game and multimedia framework for Nit

_gamnit_ is a modular framework to create portable 2D or 3D apps in Nit.
It is based on the portability framework _app.nit_ and the OpenGL ES 2.0 standard.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Dependencies

This project requires the following packages:

* `android` - Android platform support and APIs
* `app` - _app.nit_, a framework for portable applications
* `core` - Nit common library of core classes and methods
* `dom` - Easy XML DOM parser
* `egl` - Interface between rendering APIs (OpenGL, OpenGL ES, etc.) and the native windowing system.
* `gen_nit` - Support to generate and otherwise manipulate Nit code
* `geometry` - Basic geometry data structures and services
* `glesv2` - OpenGL graphics rendering library for embedded systems, version 2.0
* `ios` - iOS support for _app.nit_
* `linux` - Implementation of app.nit for the Linux platform
* `matrix` - Services for matrices of `Float` values
* `mnit`
* `more_collections` - Highly specific, but useful, collections-related classes.
* `msgpack` - MessagePack, an efficient binary serialization format
* `opts` - Management of options on the command line
* `parser_base` - Simple base for hand-made parsers of all kinds
* `performance_analysis` - Services to gather information on the performance of events by categories
* `realtime` - Services to keep time of the wall clock time
* `sdl2` - Low-level wrapper of the SDL 2.0 library (as `sdl2`) and SDL_image 2.0 (as `sdl2::image`)
* `socket` - Socket services

### Run `texture_atlas_parser`

![Diagram for `gamnit`](uml-gamnit.svg)

Compile `texture_atlas_parser` with the following command:

~~~bash
nitc ./texture_atlas_parser.nit
~~~

Then run it with:

~~~bash
./texture_atlas_parser
~~~

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

## `network`

> Both `gamnit::client` and `gamnit::server` can be used separately or
> together by importing `gamnit::network`.
> Use both modules to create an program that discover local servers
> or create one if none is found:

~~~
redef fun handshake_app_name do return "network_test"

# Discover local servers
var servers = discover_local_servers
if servers.not_empty then
    # Try to connect to the first local server
    var server_info = servers.first
    var server = new RemoteServer(server_info)

    if not server.connect then
        print_error "Failed to connect to {server_info.address}:{server_info.port}"
    else if not server.handshake then
        print_error "Failed handshake with {server_info.address}:{server_info.port}"
    else
        # Connected!
        print "Connected to {server_info.address}:{server_info.port}"

        # Write something and close connection
        server.writer.serialize "hello server"
        server.socket.as(not null).close
    end
else
    # Create a local server
    var connect_port = 33729
    print "Launching server: connect on {connect_port}, discovery on {discovery_port}"
    var server = new Server(connect_port)

    # Don't loop if testing
    if "NIT_TESTING".environ == "true" then exit 0

    loop
        # Respond to discovery requests
        server.answer_discovery_requests

        # Accept new clients
        var new_clients = server.accept_clients
        for client in new_clients do
            # Read something and close connection
            assert client.reader.deserialize == "hello server"
            client.socket.close
        end
    end
end
~~~

## `android19`

> Add support for `TextureAsset::premultiply_alpha = false` on Android.

## `flat`

> Client programs should implement `App::update` to execute game logic and
> add instances of `Sprite` to `App::sprites` and `App::ui_sprites`.
> At each frame, all sprites are drawn to the screen.

This system relies on two cameras `App::world_camera` and `App::ui_camera`.

* `App::world_camera` applies a perspective effect to draw the game world.
  This camera is designed to be moved around to see the world as well as to
  zoom in and out. It is used to position the sprites in `App::sprites`.

* `App::ui_camera` is a simple orthogonal camera to display UI objects.
  This camera should mostly be still, it can still move for chock effects
  and the like. It can be used to standardize the size of the UI across
  devices. It is used to position the sprites in `App::ui_sprites`.

See the sample game at `contrib/asteronits/` and the basic project template
at `lib/gamnit/examples/template/`.

## `keys`

> This service revolves around `app.pressed_keys`, a `Set` of the names of currently pressed keys.
> As a `Set`, `app.pressed_keys` can be iterated and queried with `has`.

Limitations: The keys names are platform dependent.

~~~nitish
redef class App
    redef fun accept_event(event)
    do
        # First, pass the event to `super`, `pressed_keys` must see all
        # events but it doesn't intercept any of them.
        if super then return true
        return false
    end

    redef fun update(dt)
    do
        for key in pressed_keys do
            if k == "left" or k == "a" then
                # Act on key pressed down
                print "left or a is pressed down"
            end
        end
    end
end
~~~

## `display_android`

> Gamnit apps on Android require OpenGL ES 3.0 because, even if it uses only
> the OpenGL ES 2.0 API, the default shaders have more than 8 vertex attributes.
> OpenGL ES 3.0 ensures at least 8 vertex attributes, while 2.0 ensures only 4.

This module relies on `android::native_app_glue` and the Android NDK.

## `cardboard`

> This module is Android specific.

## `client`

> The following code implements a client to connect to a local server and
> briefly exchange with it.

~~~
redef fun handshake_app_name do return "nitwork_test"
redef fun handshake_app_version do return "1.0"

# Prepare connection with remote server
var config = new RemoteServerConfig("localhost", 4444)
var server = new RemoteServer(config)

# Try to connect
if not server.connect then return

# Make sure the server is compatible
if not server.handshake then return

# Connection up! communicate
server.writer.serialize "hello server"
print server.reader.deserialize.as(Object)

# Done, close socket
server.socket.close
~~~

## `server`

> The following code creates a server that continuously listen for new clients,
> and exchange with them briefly before disconnecting.

~~~nitish
redef fun handshake_app_name do return "nitwork_test"
redef fun handshake_app_version do return "1.0"

Open a server on port 4444
var server = new Server(4444)

loop
    # Accept new clients
    var new_clients = server.accept_clients
    for client in new_clients do
        # A client is connected, communicate!
        print ""
        print client.reader.deserialize.as(Object)
        client.writer.serialize "Goodbye client"

        # Done, close socket
        client.socket.close
    end

    # `accept_clients` in non-blocking,
    # sleep before tying again, or do something else.
    0.5.sleep
    printn "."
end
~~~

## `particles`

> Particles are managed by instances of `ParticleSystem` that
> are configured for a specific kind of particle.
> For instance, a particle system can be created for a max of 100 particles,
> with a smoke effect and a precise texture, as in:

~~~
var smoke = new ParticleSystem(100, app.smoke_program, new Texture("smoke.png"))
~~~

The system must be registered in `app.particle_systems` to be drawn on screen.

Particles are added to a system with their configuration, as in:

~~~
var position = new Point3d[Float](0.0, 0.0, 0.0)
var scale = 2.0
var time_to_live = 1.0 # in seconds
smoke.add(position, scale, time_to_live)
~~~

## `selection`

> The two main services are `App::visible_at` and ; App::visible_in_center`.

This is implemented with simple pixel picking.
This algorithm draws each actor in a unique color to the display buffer,
using the color as an ID to detect which actor is visible at each pixel.

It is implemented at the level of the material,
so it can be applied to any _gamnit_ programs.
However it is not optimal performance wise,
so client programs should implement a more efficient algorithm.

By default, the actors are drawn as opaque objects.
This behavior can be refined, as does `TexturedMaterial` to use its
`diffuse_texture` for partial opacity.

## `dynamic_resolution`

> The attribute `dynamic_resolution_ratio` sets the size of the virtual screen
> in relation to the real screen. See its documentation for more information.

Reference implementation:
https://software.intel.com/en-us/articles/dynamic-resolution-rendering-on-opengl-es-2

## `virtual_gamepad`

> For Android, the texture is automatically added to the APK when this
> module is imported. However, due to a limitation of the _app.nit_
> framework on desktop OS, the texture must be copied manually to the assets
> folder at `assets/images`, the texture is available at, from the repo root,
> `lib/gamnit/virtual_gamepad/assets/images`.

The texture was created by kenney.nl and modified by Alexis Laferrière.
It is published under CC0 and can be used and modified without attribution.

~~~
redef class App
    redef fun create_scene
    do
        super

        # Create the virtual gamepad
        var gamepad = new VirtualGamepad

        # Configure it as needed
        gamepad.add_dpad(["w","a","s","d"])
        gamepad.add_button("x", gamepad_spritesheet.x)
        gamepad.add_button("space", gamepad_spritesheet.star)

        # Assign it as the active gamepad
        self.gamepad = gamepad
   end

   fun setup_play_ui
   do
       # Show the virtual gamepad
       var gamepad = self.gamepad
       if gamepad != null then gamepad.visible = true
   end
end
~~~

## `bmfont`

> The BMFont format supports packed textures, varying advance per character and
> even kernings. It can be generated with a number of tools, inluding:

* BMFont, free software Windows app, http://www.angelcode.com/products/bmfont/
* Littera, a web app, http://kvazars.com/littera/

Format reference: http://www.angelcode.com/products/bmfont/doc/file_format.html

## `shadow`

> The default light does not cast any shadows. It can be changed to a
> `ParallelLight` in client games to cast sun-like shadows:

~~~
import more_lights

var sun = new ParallelLight
sun.pitch = 0.25*pi
sun.yaw = 0.25*pi
app.light = sun
~~~

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
