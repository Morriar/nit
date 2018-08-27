# `bucketed_game` - Game framework with an emphasis on efficient event coordination

Provides basic game logic entities to manage a game where the logic is executed by turns:
`Game`, `GameTurn`, `GameEvent`, `Turnable`.
Also offers a bucket system to plan future events at a known number of turns in the future:
`Bucketable` and the services `act_next` and `act_in`.

Efficiently support large number of entities with rare or sparse actions,
such as a forest with many individual trees growing slowly.

## Features

![Diagram for `bucketed_game`](uml-bucketed_game.svg)

* `Bucketable` - Something acting on the game from time to time
* `Buckets` - Optimized organization of `Bucketable` instances
* `FirstTurnEvent` - Event raised at the first turn
* `Game` - Full game logic
* `GameEvent` - Game related event
* `GameTurn` - Game turn on the full logic
* `ThinGame` - Game logic on the client
* `ThinGameTurn` - Game turn on the client
* `Turnable` - Something acting on the game

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
