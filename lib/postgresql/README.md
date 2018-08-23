# `postgresql` - PostgreSQL connector for Nit

* [Features](#Features)
* [`postgres` - Services to manipulate a Postgres database](#`postgres`---Services-to-manipulate-a-Postgres-database)
* [Other features](#Other-features)
* [Authors](#Authors)

## Features

![Diagram for `postgresql`](uml-postgresql.svg)

### `postgres` - Services to manipulate a Postgres database

For more information, refer to the documentation of http://www.postgresql.org/docs/manuals/

### Usage example

~~~
class Animal
  var name: String
  var kind: String
  var age: Int
end

var animals = new Array[Animal]
var dog = new Animal("Lassy", "dog", 10)
var cat = new Animal("Garfield", "cat", 3)
var turtle = new Animal("George", "turtle", 123)

animals.add(dog)
animals.add(cat)
animals.add(turtle)

var db_suffix = "NIT_TESTING_ID".environ
var db = new Postgres.open("dbname=postgres")

assert db_is_open: not db.is_closed
assert create_table: db.create_table("IF NOT EXISTS animals_{db_suffix} (aname TEXT PRIMARY KEY, kind TEXT NOT NULL, age INT NOT NULL)") else print db.error

for animal in animals do
  assert insert: db.insert("INTO animals_{db_suffix} VALUES('{animal.name}', '{animal.kind}', {animal.age})") else print db.error
end

var result = db.raw_execute("SELECT * FROM animals_{db_suffix}")
assert  result.is_ok
assert drop_table: db.execute("DROP TABLE animals_{db_suffix}")
db.finish
assert db_is_closed: db.is_closed
~~~

## Other features

* `native_postgres` - A native wrapper ove the postgres c api

## Authors

This project is maintained by **Guilherme Mansur <mailto:guilhermerpmansur@gmail.com>**.
