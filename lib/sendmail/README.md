# `sendmail` - Send emails using the `sendmail` program

Usage example:

~~~~
if sendmail_is_available then
    var mail = new Mail("from@example.com", "Title", "Content")
    mail.to.add "to@example.org"
    mail.send
else print "please install sendmail"
~~~~

## Features

* `Mail` - An email to be sent using `sendmail`

## Authors

This project is maintained by **Alexis Laferrière <mailto:alexis.laf@xymus.net>**.
