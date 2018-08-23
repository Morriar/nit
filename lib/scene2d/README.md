# `scene2d` - Framework for 2D management of game elements

* [Features](#Features)
* [`Sprite` - The basic atomic living and moving object.](#`Sprite`---The-basic-atomic-living-and-moving-object.)
* [`View` - Abstract view do draw sprites](#`View`---Abstract-view-do-draw-sprites)
* [Other features](#Other-features)
* [Authors](#Authors)

TODO: collision framework (with quad tree?)

## Features

![Diagram for `scene2d`](uml-scene2d.svg)

### `Sprite` - The basic atomic living and moving object.

A sprite has a position and a velocity

Properties:

* `Sprite::angle_to` - Return the angle to target an other sprite
* `Sprite::bottom` - Y coordinate of bottom.
* `Sprite::left` - X coordinate of left side.
* `Sprite::overlaps` - Is self overlaps (or contains) an other sprite
* `Sprite::right` - X coordinate of right side.
* `Sprite::set_velocity` - Update of vx and vy toward a given angle and magnitude
* `Sprite::top` - Y coordinate of top.
* `Sprite::velocity_angle` - Return the current angle of velocity

### `View` - Abstract view do draw sprites

Concrete views are specific for each back-end.
View can also be used to implements camera and other fun things.

Properties:

* `View::draw_sprite` - Draw a specific sprite on the view

## Other features

* `LiveGroup` - Organizational class to manage groups of sprites and other live objects.
* `LiveObject` - The root class of the living objects (sprites, group of sprites, etc.)
* `Scene` - A state in the game logic

## Authors

This project is maintained by **Jean Privat <mailto:jean@pryen.org>**.
