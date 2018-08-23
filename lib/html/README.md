# `html` - HTML output facilities

* [Features](#Features)
* [`bootstrap` - HTML templates for Bootstrap components.](#`bootstrap`---HTML-templates-for-Bootstrap-components.)
* [Authors](#Authors)

## Features

![Diagram for `html`](uml-html.svg)

### `bootstrap` - HTML templates for Bootstrap components.

See http://getbootstrap.com/components/

Example from `html::html_page`:

~~~
module html_page is example

import html

class NitHomepage
	super HTMLPage

	redef fun head do
		add("meta").attr("charset", "utf-8")
		add("title").text("Nit")
		add("link").attr("rel", "icon").attr("href", "http://nitlanguage.org/favicon.ico").attr("type", "image/x-icon")
		add("link").attr("rel", "stylesheet").attr("href", "http://nitlanguage.org/style.css").attr("type", "text/css")
		add("link").attr("rel", "stylesheet").attr("href", "http://nitlanguage.org/local.css").attr("type", "text/css")
	end

	redef fun body do
		open("article").add_class("page")
			open("section").add_class("pageheader")
				add_html("<a id='toptitle_first' class='toptitle'>the</a><a id='toptitle_second' class='toptitle' href=''>Nit</a><a id='toptitle_third' class='toptitle' href=''>Programming Language</a>")
				open("header").add_class("header")
					open("div").add_class("topsubtitle")
						add("p").text("A Fun Language for Serious Programming")
					close("div")
				close("header")
			close("section")

			open("div").attr("id", "pagebody")
				open("section").attr("id", "content")
					add("h1").text("# What is Nit?")
					add("p").text("Nit is an object-oriented programming language. The goal of Nit is to propose a robust statically typed programming language where structure is not a pain.")
					add("p").text("So, what does the famous hello world program look like, in Nit?")
					add_html("<pre><tt><span class='normal'>print </span><span class='string'>'Hello, World!'</span></tt></pre>")

					add("h1").text("# Feature Highlights")
					add("h2").text("Usability")
					add("p").text("Nit's goal is to be usable by real programmers for real projects")

					open("ul")
						open("li")
						add("a").attr("href", "http://en.wikipedia.org/wiki/KISS_principle").text("KISS principle")
						close("li")
						add("li").text("Script-like language without verbosity nor cryptic statements")
						add("li").text("Painless static types: static typing should help programmers")
						add("li").text("Efficient development, efficient execution, efficient evolution.")
					close("ul")

					add("h2").text("Robustness")
					add("p").text("Nit will help you to write bug-free programs")

					open("ul")
						add("li").text("Strong static typing")
						add("li").text("No more NullPointerException")
					close("ul")

					add("h2").text("Object-Oriented")
					add("p").text("Nit's guideline is to follow the most powerful OO principles")

					open("ul")
						open("li")
						add("a").attr("href", "./everything_is_an_object/").text("Everything is an object")
						close("li")
						open("li")
						add("a").attr("href", "./multiple_inheritance/").text("Multiple inheritance")
						close("li")
						open("li")
						add("a").attr("href", "./refinement/").text("Open classes")
						close("li")
						open("li")
						add("a").attr("href", "./virtual_types/").text("Virtual types")
						close("li")
					close("ul")


					add("h1").text("# Getting Started")
					add("p").text("Get Nit from its Git repository:")

					add_html("<pre><code>$ git clone http://nitlanguage.org/nit.git</code></pre>")
					add("p").text("Build the compiler (may be long):")
					add_html("<pre><code>$ cd nit\n")
					add_html("$ make</code></pre>")
					add("p").text("Compile a program:")
					add_html("<pre><code>$ bin/nitc examples/hello_world.nit</code></pre>")
					add("p").text("Execute the program:")
					add_html("<pre><code>$ ./hello_world</code></pre>")
				close("section")
			close("div")
		close("article")
	end
end

var page = new NitHomepage
page.write_to stdout
page.write_to_file("nit.html")
~~~

## Authors

This project is maintained by **Alexandre Terrasa <mailto:alexandre@moz-code.org>**.
