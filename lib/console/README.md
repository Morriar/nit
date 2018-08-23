# `console` - Defines some ANSI Terminal Control Escape Sequences

* [Features](#Features)
* [`TermClearDisplay` - ANSI/VT100 code to clear the entire display and move the cursor to the top left of screen (ED 2).](#`TermClearDisplay`---ANSI/VT100-code-to-clear-the-entire-display-and-move-the-cursor-to-the-top-left-of-screen-(ED-2).)
* [`TermCharFormat` - ANSI/VT100 code to change character look (SGR).](#`TermCharFormat`---ANSI/VT100-code-to-change-character-look-(SGR).)
* [`TermProgress` - A dynamic progress bar displayable in console.](#`TermProgress`---A-dynamic-progress-bar-displayable-in-console.)
* [Other features](#Other-features)
* [Authors](#Authors)

The color methods (e.g. `Text::green`) format the text to appear colored
in a ANSI/VT100 terminal. By default, this coloring is skipped if stdout
is not a TTY, but it can be forced by setting `force_console_colors = true`.

## Features

### `TermClearDisplay` - ANSI/VT100 code to clear the entire display and move the cursor to the top left of screen (ED 2).

Note: Some terminals always move the cursor when the screen is cleared. So we
force this behaviour to ensure interoperability of the code.

### `TermCharFormat` - ANSI/VT100 code to change character look (SGR).

By default, resets everything to the terminal’s defaults.

Note:

The escape sequence inserted at the end of the string by terminal-related
methods of `String` resets all character attributes to the terminal’s
defaults. So, when combining format `a` and `b`, something like
`("foo".a + " bar").b` will not work as expected, but `"foo".a.b + " bar".b`
will. You may also use `TermCharFormat` (this class).

Usage example:

    print "{(new TermCharFormat).yellow_fg.bold}a{(new TermCharFormat).yellow_fg}b{new TermCharFormat}"

Properties:

* `TermCharFormat::black_bg` - Apply a black background and return `self`.
* `TermCharFormat::black_fg` - Apply a black foreground and return `self`.
* `TermCharFormat::blink` - Apply blinking or bold weight and return `self`.
* `TermCharFormat::blue_bg` - Apply a blue background and return `self`.
* `TermCharFormat::blue_fg` - Apply a blue foreground and return `self`.
* `TermCharFormat::bold` - Apply bold weight and return `self`.
* `TermCharFormat::cyan_bg` - Apply a cyan background and return `self`.
* `TermCharFormat::cyan_fg` - Apply a cyan foreground and return `self`.
* `TermCharFormat::default` - Apply normal (default) format and return `self`.
* `TermCharFormat::default_bg` - Apply the default background and return `self`.
* `TermCharFormat::default_fg` - Apply the default foreground and return `self`.
* `TermCharFormat::from` - Copies the attributes from the specified format.
* `TermCharFormat::green_bg` - Apply a green background and return `self`.
* `TermCharFormat::green_fg` - Apply a green foreground and return `self`.
* `TermCharFormat::inverse` - Apply reverse video and return `self`.
* `TermCharFormat::magenta_bg` - Apply a magenta background and return `self`.
* `TermCharFormat::magenta_fg` - Apply a magenta foreground and return `self`.
* `TermCharFormat::normal_weight` - Apply normal weight and return `self`.
* `TermCharFormat::not_underlined` - Add the attribute that disable underlining and return `self`.
* `TermCharFormat::positive` - Add the attribute that disable reverse video and return `self`.
* `TermCharFormat::red_bg` - Apply a red background and return `self`.
* `TermCharFormat::red_fg` - Apply a red foreground and return `self`.
* `TermCharFormat::steady` - Add the attribute that disable blinking and return `self`.
* `TermCharFormat::underline` - Apply underlining and return `self`.
* `TermCharFormat::white_bg` - Apply a white background and return `self`.
* `TermCharFormat::white_fg` - Apply a white foreground and return `self`.
* `TermCharFormat::yellow_bg` - Apply a yellow background and return `self`.
* `TermCharFormat::yellow_fg` - Apply a yellow foreground and return `self`.

### `TermProgress` - A dynamic progress bar displayable in console.

Example:

~~~nitish
var max = 10
var current = 0
var pb = new TermProgress(max, current)

pb.display
for i in [current + 1 .. max] do
	nanosleep(1, 0)
	pb.update(i)
end

print "\ndone"
~~~

Progress bar can accept metadata to display a small amount of data.

Example with metadata:

~~~nitish
var pb = new TermProgress(10, 0)
for i in [0..10] do
	pb.update(i, "Step {i}")
end
~~~

Properties:

* `TermProgress::current_percentage` - Get the current percent value.
* `TermProgress::display` - Display the progress bar.
* `TermProgress::update` - Update and display the progress bar.

## Other features

* `TermClearLine` - ANSI/VT100 code to clear everything in the current line (EL 2).
* `TermDirectionalMove` - Abstract class of the ANSI/VT100 escape sequences for directional moves.
* `TermEraseDisplayDown` - ANSI/VT100 code to clear from the cursor to the end of the screen (ED 0).
* `TermEraseDisplayUp` - ANSI/VT100 code to clear from the cursor to the beginning of the screen (ED 1).
* `TermEraseLineBackward` - ANSI/VT100 code to erase anything before the cursor in the line (EL 1).
* `TermEraseLineFoward` - ANSI/VT100 code to erase anything after the cursor in the line (EL 0).
* `TermEscape` - A ANSI/VT100 escape sequence.
* `TermMove` - ANSI/VT100 code to move the cursor at the specified position (CUP).
* `TermMoveBackward` - ANSI/VT100 code to move the cursor backward by `magnitude` columns (CUB).
* `TermMoveDown` - ANSI/VT100 code to move the cursor down by `magnitude` rows (CUD).
* `TermMoveFoward` - ANSI/VT100 code to move the cursor forward by `magnitude` columns (CUF).
* `TermMoveUp` - ANSI/VT100 code to move the cursor up by `magnitude` rows (CUU).
* `TermRestoreCursor` - ANSI/VT100 code to restore the current cursor position (RCP).
* `TermSaveCursor` - ANSI/VT100 code to save the current cursor position (SCP).

## Authors

This project is maintained by **Jean-Christophe Beaupré <mailto:jcbrinfo@users.noreply.github.com>**.
