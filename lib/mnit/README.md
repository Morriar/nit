# `mnit`

* [Features](#Features)
* [`MotionEvent` - A motion event on screen composed of many `PointerEvent`](#`MotionEvent`---A-motion-event-on-screen-composed-of-many-`PointerEvent`)
* [Other features](#Other-features)
* [Authors](#Authors)

## Features

![Diagram for `mnit`](uml-mnit.svg)

### `MotionEvent` - A motion event on screen composed of many `PointerEvent`

Example of a `MotionEvent` a gesture such as pinching using two fingers.

Properties:

* `MotionEvent::down_pointer` - Which pointer is down, if any
* `MotionEvent::just_went_down` - A pointer just went down?

## Other features

* `InputEvent` - Input to the App, propagated through `App::input`.
* `KeyEvent` - Keyboard or other keys event
* `MobileKeyEvent` - Mobile hardware (or pseudo hardware) event
* `PointerEvent` - Mouse and touch input events
* `QuitEvent` - Quit event, used for window close button
* `SensorEvent` - Sensor events like accelerometer, gyroscope etc for mobile apps
* `TouchEvent` - Specific touch event

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
