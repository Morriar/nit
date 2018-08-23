# `egl` - Interface between rendering APIs (OpenGL, OpenGL ES, etc.) and the native windowing system

Most services of this module are a direct wrapper of the underlying
C library. If a method or class is not documented in Nit, refer to
the official documentation by the Khronos Group at:
http://www.khronos.org/registry/egl/sdk/docs/man/xhtml/

## Features

* `EGLConfig`
* `EGLConfigAttribs` - Attributes of a config for a given EGL display
* `EGLConfigCaveat`
* `EGLConfigChooser` - Utility class to choose an EGLConfig
* `EGLConformant`
* `EGLContext`
* `EGLContextAttribute`
* `EGLDisplay`
* `EGLError`
* `EGLNativeDisplayType`
* `EGLSurface`
* `EGLSurfaceAttribs` - Attributes of a surface for a given EGL display

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
