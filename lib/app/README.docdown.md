# `app` - [[ini-desc: app]]

[[toc: app]]

[[doc: app::app]]

Example from `app::http_request_example`:

[[code: app::http_request_example]]

## Getting Started

These instructions will get you a copy of the project up and running on your local machine.

### Dependencies

This project requires the following packages:

[[parents: app]]

### Run `app_base`

Compile `app_base` with the following command:

[[main-compile: app::app_base]]

## Features

[[uml: app | format: svg, mentities: app::app;app::app_base;app::assets;app::audio;app::data_store;app::http_request;app::ui]]

### `audio` - Services to load and play `Sound` and `Music` from the assets folder

[[doc: app::audio | no-synopsis]]

### `data_store` - Key/value storage services

[[doc: app::data_store | no-synopsis]]

Example from `app::ui_example`:

[[code: app::ui_example]]

### `http_request` - HTTP request services: `AsyncHttpRequest` and `Text::http_get`

[[doc: app::http_request | no-synopsis]]

### `ui` - Portable UI controls for mobiles apps

[[doc: app::ui | no-synopsis]]

## Other features

[[features: app | mentities: app::app_base;app::assets]]

Then run it with:

[[main-run: app::app_base]]

## Authors

This project is maintained by [[ini-maintainer: app]].
