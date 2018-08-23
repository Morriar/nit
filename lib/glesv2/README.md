# `glesv2` - OpenGL graphics rendering library for embedded systems, version 2.0

* [Features](#Features)
* [`GLDataType` - All data types of OpenGL ES 2.0 shaders](#`GLDataType`---All-data-types-of-OpenGL-ES-2.0-shaders)
* [Other features](#Other-features)
* [Authors](#Authors)

This is a low-level wrapper, it can be useful for developers already familiar
with the C API of OpenGL. Most developers will prefer to use the higher level
graphic API `gammit`.

Defines the annotations `glsl_vertex_shader` and `glsl_fragment_shader`
applicable on string literals to check shader code using `glslangValidator`.
The tool must be in PATH. It can be downloaded from
https://www.khronos.org/opengles/sdk/tools/Reference-Compiler/

Most services of this module are a direct wrapper of the underlying
C library. If a method or class is not documented in Nit, refer to
the official documentation by the Khronos Group at:
http://www.khronos.org/opengles/sdk/docs/man/

Example from `glesv2::opengles2_hello_triangle`:

~~~
# Basic example of OpenGL ES 2.0 usage using SDL 2
#
# From the book OpenGL ES 2.0 Programming Guide, see code reference:
# https://code.google.com/p/opengles-book-samples/source/browse/trunk/LinuxX11/Chapter_2/Hello_Triangle/Hello_Triangle.c
module opengles2_hello_triangle is example

import glesv2
import egl
import sdl2

import realtime

if "NIT_TESTING".environ == "true" then exit(0)

var window_width = 800
var window_height = 600

#
## SDL2
#
assert sdl.initialize((new SDLInitFlags).video) else
	print sdl.error
end

var sdl_window = new SDLWindow("Title".to_cstring, window_width, window_height, (new SDLWindowFlags).opengl)
assert not sdl_window.address_is_null else print sdl.error

var sdl_wm_info = sdl_window.wm_info
var native_window = sdl_wm_info.window_handle
var native_display = sdl_wm_info.display_handle
assert not native_display.address_is_null else print "Failed to get handle to native display"

#
## EGL
#
var egl_display = new EGLDisplay(native_display)
assert egl_display.is_valid else print "EGL display is not valid"

egl_display.initialize
assert egl_display.is_valid else print egl_display.error

print "EGL version: {egl_display.version}"
print "EGL vendor: {egl_display.vendor}"
print "EGL extensions: \n* {egl_display.extensions.join("\n* ")}"
print "EGL client APIs: {egl_display.client_apis.join(", ")}"

var config_chooser = new EGLConfigChooser
#config_chooser.surface_type_egl
config_chooser.blue_size = 8
config_chooser.green_size = 8
config_chooser.red_size = 8
#config_chooser.alpha_size = 8
#config_chooser.depth_size = 8
#config_chooser.stencil_size = 8
#config_chooser.sample_buffers = 1
config_chooser.close

var configs = config_chooser.choose(egl_display)
assert configs != null else print "choosing config failed: {egl_display.error}"
assert not configs.is_empty else print "no EGL config"

print "{configs.length} EGL configs available"
for config in configs do
	var attribs = config.attribs(egl_display)
	print "* caveats: {attribs.caveat}"
	print "  conformant to: {attribs.conformant}"
	print "  size of RGBA: {attribs.red_size} {attribs.green_size} {attribs.blue_size} {attribs.alpha_size}"
	print "  buffer, depth, stencil: {attribs.buffer_size} {attribs.depth_size} {attribs.stencil_size}"
end

var config = configs.first

var surface = egl_display.create_window_surface(config, native_window, [0])
assert surface.is_ok else print egl_display.error

var context = egl_display.create_context(config)
assert context.is_ok else print egl_display.error

var make_current_res = egl_display.make_current(surface, surface, context)
assert make_current_res else print egl_display.error

var width = surface.attribs(egl_display).width
var height = surface.attribs(egl_display).height
print "Width: {width}"
print "Height: {height}"

assert egl_bind_opengl_es_api else print "eglBingAPI failed: {egl_display.error}"

#
## GLESv2
#

print "Can compile shaders? {gl.shader_compiler}"
assert_no_gl_error

assert gl.shader_compiler else print "Cannot compile shaders"

# gl program
print glGetError.to_s
var program = new GLProgram
if not glIsProgram(program) then
	print "Program is not ok: {glGetError.to_s}\nLog:"
	print glGetProgramInfoLog(program)
	abort
end
assert_no_gl_error

# vertex shader
var vertex_shader = new GLVertexShader
assert glIsShader(vertex_shader) else print "Vertex shader is not ok: {glGetError}"
glShaderSource(vertex_shader, """
attribute vec4 vPosition;
void main()
{
  gl_Position = vPosition;
}
""".to_cstring)
glCompileShader vertex_shader
assert vertex_shader.is_compiled else print "Vertex shader compilation failed with: {glGetShaderInfoLog(vertex_shader)} {glGetProgramInfoLog(program)}"
assert_no_gl_error

# fragment shader
var fragment_shader = new GLFragmentShader
assert glIsShader(fragment_shader) else print "Fragment shader is not ok: {glGetError}"
glShaderSource(fragment_shader, """
precision mediump float;
void main()
{
	gl_FragColor = vec4(1.0, 0.0, 0.0, 1.0);
}
""".to_cstring)
glCompileShader(fragment_shader)
assert fragment_shader.is_compiled else print "Fragment shader compilation failed with: {glGetShaderInfoLog(fragment_shader)}"
assert_no_gl_error

glAttachShader(program, vertex_shader)
glAttachShader(program, fragment_shader)
program.bind_attrib_location(0, "vPosition")
glLinkProgram program
assert program.is_linked else print "Linking failed: {glGetProgramInfoLog(program)}"
assert_no_gl_error

# prepare
glViewport(0, 0, width, height)
glClearColor(0.5, 0.0, 0.5, 1.0)

# draw!
var vertices = [0.0, 0.5, 0.0, -0.5, -0.5, 0.0, 0.5, -0.5, 0.0]
var vertex_array = new VertexArray(0, 3, vertices)
vertex_array.attrib_pointer

var clock = new Clock

var n_frames = 1000
for i in [0..n_frames[ do
	printn "."
	assert_no_gl_error

	glClear gl_COLOR_BUFFER_BIT
	glUseProgram program
	vertex_array.enable
	glDrawArrays(gl_TRIANGLES, 0, 3)
	egl_display.swap_buffers(surface)
end

print "FPS: {n_frames.to_f/clock.lapse.to_f}"

# delete
glDeleteProgram program
glDeleteShader vertex_shader
glDeleteShader fragment_shader

#
## EGL
#
# close
egl_display.make_current(new EGLSurface.none, new EGLSurface.none, new EGLContext.none)
egl_display.destroy_context context
egl_display.destroy_surface surface

#
## SDL2
#
# close
sdl.quit
~~~

## Features

### `GLDataType` - All data types of OpenGL ES 2.0 shaders

These types can be used by shader uniforms, as seen with
`GLProgram::active_uniform_type`.

## Other features

* `GLArrayBuffer` - Target to which bind the buffer with `glBindBuffer`
* `GLAttachment` - Renderbuffer attachment point to a framebuffer
* `GLBlendFactor` - Pixel arithmetic for blending operations
* `GLBuffer` - Set of buffers as a bitwise OR mask
* `GLBufferUsage` - Expected usage of a buffer
* `GLCap` - A server-side capability
* `GLCapabilities` - Entry point to OpenGL server-side capabilities
* `GLCullFaceMode` - Candidates for culling
* `GLDepthFunc` - Condition under which a pixel will be drawn
* `GLDrawMode` - Kind of primitives to render
* `GLES` - OpenGL ES 2.0 services
* `GLEnum` - General type for OpenGL enumerations
* `GLError` - An OpenGL ES 2.0 error code
* `GLFragmentShader` - An OpenGL ES 2.0 fragment shader
* `GLFramebufferStatus` - Return value of `glCheckFramebufferStatus`
* `GLFramebufferTarget` - Target of `glBindFramebuffer`
* `GLFrontFaceMode` - Orientation of front-facing polygons
* `GLGetParameterName` - Shader parameter
* `GLHintMode` - Hint mode for `glHint`
* `GLHintTarget` - Hint target for `glHint`
* `GLPack` - Symbolic name of the parameter to be set with `glPixelStorei`
* `GLPixelFormat` - Format of pixel data
* `GLProgram` - OpenGL ES program to which we attach shaders
* `GLRenderbufferFormat` - Format for a renderbuffer
* `GLRenderbufferTarget` - Target of `glBindRenderbuffer`
* `GLShader` - Abstract OpenGL ES shader object, implemented by `GLFragmentShader` and `GLVertexShader`
* `GLShaderType` - Shader type
* `GLTexParameteri` - Texture minifying and magnifying function
* `GLTexParameteriName` - Name of parameters of textures
* `GLTextureTarget` - Target texture
* `GLTextureUnit` - Texture unit, the number of texture units is implementation dependent
* `GLVertexShader` - An OpenGL ES 2.0 vertex shader
* `GLfloatArray` - Low level array of `Float`
* `NativeGLfloatArray` - An array of `GLfloat` in C (`GLfloat*`)
* `VertexArray` - An array of `Float` associated to a program variable

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
