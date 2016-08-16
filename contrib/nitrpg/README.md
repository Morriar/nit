# Welcome to NitRPG!

NitRPG is a Role Playing Game that takes place on [GitHub](https://github.com/).

In NitRPG, GitHub users are represented by players that battle on repo for
nitcoins and glory.

## Features

* Auto-update with GitHub hooks
* Display repo statistics
* Display players statsitics
* Repo actions are rewarded by nitcoins
* Players can unlock achievements

NitRPG comes with two tools:
* the popcorn `app` used as a web server that display the NitRPG scores
* the `loader` that allows you to load the history of a repo from the Github

## Web server

The `app` program act as a webserver that display the game results live.

### How to install

From the `nit` root:

~~~bash
> cd contrib/nitrpg
> make
~~~

### Configuring the web server

Configuration is done through the `nitrpg.ini` file:

~~~ini
app.host=127.0.0.1
app.port=3000
~~~

### Starting the web server

To run the app:

	bin/app --config <config_file>

The arguments `--config` is optional, NitRPG will look for a `nitrpg.ini` file
in the current dir.
If no configuration file can be found, NitRPG will try to start on `127.0.0.1:3000`.

## Loader

The `loader` program allows you to import the history of a repository before it was
hooked to a NitRpg server.

### How to build

From the `nit` root:

~~~bash
> cd contrib/nitrpg
> make loader
~~~

### Configuring the loader

Configuration is done through the `loader.ini` file:

~~~ini
tokens[]= Github Token 1
tokens[]= Github Token 2
tokens[]= Github Token ...
~~~

The `tokens` array is a list of tokens that can be used by the Github `Wallet`.

### Loading a repo history

Pass the repo full name to the loader:

	bin/loader --config <config_file> User/repo

Where `User/repo` is the full name of the repo you want to load.
For instance `Morriar/nit`.

The arguments `--config` is optional, NitRPG will look for a `loader.ini` file
in the current dir.

## RoadMap

NitRPG stills under heavy development.
Incomming features contain (but are not limited to):

* Periodized stats (weekly, monthly, yearly, overall)
* Display graphs with stats
* More achievements
* Shop: exchange Nitcoins against glorifying items

You can suggest new achievements or ideas in the
[NitRPG RoadMap Issue](https://github.com/nitlang/nit/issues/1161).
