# `bcm2835` - Services to control the bcm2835 chipset used in the Raspberry Pi

Uses the C library by Mike McCauley available at http://www.airspayce.com/mikem/bcm2835/

This module targets the model B revision 1, it could be tweaked for other versions.

Example from `bcm2835::blink`:

~~~
module blink is example

import bcm2835

assert bcm2835_init else print "Failed to init"

var out = new RPiPin.p1_11
out.fsel = new FunctionSelect.outp

for i in [0..1000[ do
	out.write(true)
	500.bcm2835_delay
	out.write(false)
	500.bcm2835_delay
end

bcm2835_close
~~~

## Features

* `Buzzer`
* `FunctionSelect`
* `HD44780` - Hitachi HD44780 or similar 2-4 lines LCD displays
* `PUDControl`
* `Pin` - A physical binary pin
* `RPiPin`
* `RotaryEncoder`
* `StepperMotor`
* `Switch` - Component for any kind of buttons or switches

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
