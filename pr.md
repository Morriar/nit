## Unify http

We had multiple representation of `HttpRequest` and `HttpResponse` in `nitcorn`
and `curl`. `popcorn` was also adding some sprinkles on the top, I tried to
unify all of this to provide a clean library that could satisfy everyone.

### HttpHeader

We had two implementations:

* `nitcorn` uses an array of String, one for each line
  This is a bit inconvenient when you want to play with the field.
  The client has to implement all the logic this doesn't sound like a good idea for
  a high level library.

* `curl` uses an array of Couple
  I like the idea more since you can manipulate keys and values separately but the
  fact it's not implementing `Map` is sometimes an inconvenience.

I chose to go we the `Map[String, nullable String]` because most of the time you
don't care if the header is there multiple time, so you don't want to manipulate
an array, simple things should be simple. You can access all the fields with the
same name with `get` or by iterating over the header.

The `nullable` because it plays nicely with `or else` compared to `if header.has_key...`.

This map is backed by an Array of `HttpField` (semantically better than `Couple[String, String]`).
Both previous solution had the merit of being low memory cost.

In this one too I sacrified speed for space and keys access that are in O(n).
Having a map to maintain the relation between a name and its fields would double
the size of the header since we also have to maintain the order of the fields.

My idea was that you want your requests and responses as small as possible since
in nitcorn and popcorn you will keep them in memory for the whole cycle.
The ratio with the number of direct access to a field seemed in favor of the memory space.

### Misc

Also added a lot of tests.
