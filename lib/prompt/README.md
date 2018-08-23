# `prompt` - Basic services to display a prompt

* [Features](#Features)
* [`Sys::prompt` - Display `prompt` in the console and wait for a response](#`Sys::prompt`---Display-`prompt`-in-the-console-and-wait-for-a-response)
* [`Sys::prompt_add_history` - Add `line` to the shell history](#`Sys::prompt_add_history`---Add-`line`-to-the-shell-history)
* [Authors](#Authors)

## Features

### `Sys::prompt` - Display `prompt` in the console and wait for a response

Return the user response, or `null` if EOF.

If `add_history`, the user response is added to the history.

### `Sys::prompt_add_history` - Add `line` to the shell history

The default implementation is a noop, but other packages can refine it.

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
