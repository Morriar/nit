# `gamnit` - Portable game and multimedia framework for Nit

* [Getting Started](#Getting-Started)
* [Dependencies](#Dependencies)
* [Run `texture_atlas_parser`](#Run-`texture_atlas_parser`)
* [Features](#Features)
* [`android19` - Variation using features from Android API 19](#`android19`---Variation-using-features-from-Android-API-19)
* [`bmfont` - Parse Angel Code BMFont format and draw text](#`bmfont`---Parse-Angel-Code-BMFont-format-and-draw-text)
* [`display_android` - Gamnit display implementation for Android](#`display_android`---Gamnit-display-implementation-for-Android)
* [`dynamic_resolution` - Virtual screen with a resolution independent from the real screen](#`dynamic_resolution`---Virtual-screen-with-a-resolution-independent-from-the-real-screen)
* [`keys` - Simple service keeping track of which keys are currently pressed](#`keys`---Simple-service-keeping-track-of-which-keys-are-currently-pressed)
* [Other features](#Other-features)
* [Authors](#Authors)

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Dependencies

This project requires the following packages:

* `android` - Android platform support and APIs
* `app` - _app.nit_, a framework for portable applications
* `core` - Nit common library of core classes and methods
* `dom` - Easy XML DOM parser
* `egl` - Interface between rendering APIs (OpenGL, OpenGL ES, etc.) and the native windowing system
* `gen_nit` - Support to generate and otherwise manipulate Nit code
* `geometry` - Basic geometry data structures and services
* `glesv2` - OpenGL graphics rendering library for embedded systems, version 2.0
* `ios` - iOS support for _app.nit_
* `linux` - Implementation of app.nit for the Linux platform
* `matrix` - Services for matrices of `Float` values
* `mnit` - `mnit`
* `more_collections` - Highly specific, but useful, collections-related classes
* `msgpack` - MessagePack, an efficient binary serialization format
* `opts` - Management of options on the command line
* `parser_base` - Simple base for hand-made parsers of all kinds
* `performance_analysis` - Services to gather information on the performance of events by categories
* `realtime` - Services to keep time of the wall clock time
* `sdl2` - This is a low-level wrapper of the SDL 2.0 library (as `sdl2`) and SDL_image 2.0 (as `sdl2::image`)
* `socket` - Socket services

### Run `texture_atlas_parser`

Compile `texture_atlas_parser` with the following command:

~~~bash
nitc ./texture_atlas_parser.nit
~~~

## Features

![Diagram for `gamnit`](uml-gamnit.svg)

### `android19` - Variation using features from Android API 19

Add support for `TextureAsset::premultiply_alpha = false` on Android.

### `bmfont` - Parse Angel Code BMFont format and draw text

The BMFont format supports packed textures, varying advance per character and
even kernings. It can be generated with a number of tools, inluding:

* BMFont, free software Windows app, http://www.angelcode.com/products/bmfont/
* Littera, a web app, http://kvazars.com/littera/

Format reference: http://www.angelcode.com/products/bmfont/doc/file_format.html

### `display_android` - Gamnit display implementation for Android

Gamnit apps on Android require OpenGL ES 3.0 because, even if it uses only
the OpenGL ES 2.0 API, the default shaders have more than 8 vertex attributes.
OpenGL ES 3.0 ensures at least 8 vertex attributes, while 2.0 ensures only 4.

This module relies on `android::native_app_glue` and the Android NDK.

### `dynamic_resolution` - Virtual screen with a resolution independent from the real screen

The attribute `dynamic_resolution_ratio` sets the size of the virtual screen
in relation to the real screen. See its documentation for more information.

Reference implementation:
https://software.intel.com/en-us/articles/dynamic-resolution-rendering-on-opengl-es-2

### `keys` - Simple service keeping track of which keys are currently pressed

This service revolves around `app.pressed_keys`, a `Set` of the names of currently pressed keys.
As a `Set`, `app.pressed_keys` can be iterated and queried with `has`.

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

## Other features

* `camera_control` - Simple camera control for user, as the method `accept_scroll_and_zoom`
* `camera_control_android` - Two fingers camera manipulation, pinch to zoom and slide to scroll
* `camera_control_linux` - Mouse wheel and middle mouse button to control camera
* `cameras` - Camera services producing Model-View-Projection matrices
* `cameras_cache` - Cache the `Matrix` produced by `Camera::mvp_matrix`
* `display` - Abstract display services
* `display_ios` - Gamnit display implementation for iOS
* `display_linux` - Gamnit display implementation for GNU/Linux using `egl`, `sdl` and `x11`
* `egl` - Use of EGL to implement Gamnit on GNU/Linux and Android
* `font` - Abstract font drawing services, implemented by `bmfont` and `tileset`
* `gamnit_android` - Support services for Gamnit on Android
* `gamnit_ios` - Support services for gamnit on iOS
* `gamnit_linux` - Support services for Gamnit on GNU/Linux
* `input_ios` - Gamnit event support for iOS
* `landscape` - Lock the application in the landscape orientation
* `limit_fps` - Frame-rate control for applications
* `portrait` - Lock the application in the portrait orientation
* `programs` - Services for graphical programs with shaders, attributes and uniforms
* `texture_atlas_parser` - Tool to parse XML texture atlas and generated Nit code to access subtextures
* `textures` - Load textures, create subtextures and manage their life-cycle
* `tileset` - Support for `TileSet`, `TileSetFont` and drawing text with `TextSprites`

Then run it with:

~~~bash
./texture_atlas_parser
~~~

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
