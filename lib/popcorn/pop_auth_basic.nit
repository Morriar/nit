# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2017 Alexandre Terrasa <alexandre@moz-code.org>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Basic Authentification API
#
# This API provides a simple authentification mechanism for Popcorn apps.
#
# Features:
# * Signup for new users with optional email verification process
# * Signin process for already registered user with optional verified email required
# * Signout process
# * Reset a lost password from email address
#
# ## Authentification repository
#
# Newly registered users are stored thanks to a `popcorn_repos::Repository` with
# customizable backend.
#
# You must provide an implmentation of the `AuthRepository` interface and pass it
# to the AppConfig.
#
# Here an example with a MongoDB backend:
#
# ~~~nit
# import popcorn::pop_auth_basic
#
# class MyUserRepo
#	super AuthRepository
#	super MongoRepository[User]
#
#	redef fun find_by_login(login) do
#		return find((new MongoMatch).eq("login", login))
#	end
#
#	redef fun find_by_email(email) do
#		return find((new MongoMatch).eq("email", email))
#	end
# end
#
# class MyBasicConfig
#	super AppConfig
#
#	redef var auth_repo = new MyUserRepo(db.collection("users")) is lazy
# end
# ~~~
#
# ## Basic configuration
#
# With the most minimal configuration will provide a functionnal signup/signin/signout
# process but with no email verification or password reset process.
#
# ~~~nit
# var config = new MyBasicConfig
# config.parse_options(args)
#
# var app = new App
# app.use_before("/*", new SessionInit)
# app.use("/auth", new AuthBasicRouter(config))
# ~~~
#
# To enable the password reset process, you have to provide a send address
# and the location of reset password form:
#
# ~~~nit
# config.email_from = "Test <test@moz-code.org>"
# config.lost_password_uri = "http://localhost:3000/my/handler/with/a/reset/password/form"
# ~~~
#
# Warning: `sendmail` must be installed and configured on the host.
#
# To enable the verify email address process, you have to provide the verification
# base uri and the verification success redirection:
#
# ~~~nit
# # Set config for email verification process
# config.verify_emails = true
# config.require_verified_email = true # optional
# config.verification_uri = "http://localhost:3000/api/auth/email"
# config.verification_redirection_uri = "/" # here we use the index as a confirmation page
# ~~~
#
# Fore more details see the following sections.
#
# ## Signup process
#
# The signup process allows new users to create an account on the app.
#
# Use the `AuthBasicSignup` handler located on `/signup`:
#
# ~~~raw
# POST /signup
# { login: "Alex", password1: "hunter2", password2: "hunter2", email: "alexandre@moz-code.org" }
# ~~~
#
# `AuthBasicSignup` will:
# 1. validate the login, passwords and email format thanks to `SignupValidator`
# 2. properly salt and hash the user password
# 3. insert the new `User` instance into the `auth_repo`
#
# Additionally, if `AppConfig::verify_emails` is set to `true`, popcorn will
# send a verification email to the address provided by the user:
#
# ~~~nit
# # Set config for email verification process
# config.verify_emails = true
# config.require_verified_email = true # optional
# config.verification_email_subject = "Welcome to my site"
# config.verification_uri = "http://localhost:3000/api/auth/email"
# config.verification_redirection_uri = "/" # here we use the index as a confirmation page
# ~~~
#
# Process:
# 1. When the signup process is completed through `AuthBasicSignup`, the user
#    will receive an email with a verification link.
# 2. When the user clicks the link, he lands on `AppConfig::verification_uri` with
#    `AuthBasicEmailVerification` that will check if the provided token is valid
#    for the user email.
# 3. Once the token checked, `AuthBasicEmailVerification` redirects the user to
#    `AppConfig::verification_redirection_uri` (you have to implement this route in
#	 your frontend to inform the user of the validation process result).
#
# `AuthBasicEmailVerification` will pass the following GET parameters to your
# `verification_redirection_uri` handler:
#  * `?email_verification=success`: if the verification process was executed successfully
#  * `?email_verification=error_cause`: if something went wrong
#
# ## Signin process
#
# The signin process allows already registered users (signup) to open a session on the app.
#
# Use the `AuthBasicSignin` handler located on `/signin`:
#
# ~~~raw
# POST /signin
# { login: "Alex", password: "hunter2" }
# ~~~
#
# `AuthBasicSignin` will:
# 1. validate the login and password format thanks to `SigninValidator`
# 2. properly salt and hash the user password
# 3. try to match the provided credentials against the `auth_repo`
#
# Depending on `AppConfig::require_verified_email`, the signin will be rejected fot
# users with an unverified email address.
#
# See `examples/auth_basic` for an implementation example.
#
# ## Lost password process
#
# The lost password process allows registered users to change their password without
# the old one. To ensure the user identity, a reset link is sent on the email address
# provided by the user.
#
# To enable the lost password process, you must provide the URI used to change passwords:
#
# ~~~nit
# config.lost_password_uri = "http://localhost:3000/my/handler/with/a/reset/password/form"
# ~~~
#
# Use the `AuthBasicLostPassword` handler located on `/password/lost`:
#
# ~~~raw
# POST /password/lost
# { email: "alexandre@moz-code.org" }
# ~~~
#
# `AuthBasicLostPassword` will:
# 1. validate the email format thanks to `LostPasswordValidator`
# 2. check if the `auth_repo` contains a user for the given email address
# 3. send an email to the user containing a reset link
#
# The reset password email contains a link to
# `http://localhost:3000/my/handler/with/a/reset/password/form?token=TOKEN`
# where `TOKEN` is the reset token generated by popcorn.
# You have to implement a handler that provides a form to the user so he will be
# able to set a new one.
#
# You must pass the `TOKEN` along with the login and the new password to
# `AuthBasicResetPassword` located on `/password/reset`.
#
# ~~~raw
# POST /signup
# { login: "Alex", password1: "hunter2", password2: "hunter2", token: "TOKEN" }
# ~~~
#
# `AuthBasicResetPassword` will:
# 1. validate the login and password format thanks to `LostPasswordValidator`
# 2. check if the `auth_repo` contains a user for the given login address
# 3. check if TOKEN is valid for the given login
# 4. update the `auth_repo` with the new password
#
# For a full example see `examples/auth_basic`.
#
# TODO merge and unify with other authentification process (github, shib)
module pop_auth_basic

import popcorn
import popcorn::pop_config
import popcorn::pop_validation
import popcorn::pop_repos
import popcorn::pop_json

import template::macro
import sendmail

##########
# Config #
##########

redef class AppConfig

	# Repository used for authentification and user creation
	#
	# Here an example on how to set this variable with a MongoDB repository:
	# ~~~nitish
	# class MyAuthConfig
	#	super AppConfig
    #
	#	# Here we use a Mongo repository for storing the users
	#	# With this variable, we use `users` as a more elegant identifier than
	#	# `auth_repo` in our own code.
	#	var users = new UserRepo(db.collection("users")) is lazy
    #
	#	# Pass the `users` repository as the `auth_repo` used for signup/signin
	#	redef var auth_repo = users is lazy
	# end
	# ~~~
	#
	# See `AuthRepository` for more details on how to implement the basic auth repo.
	var auth_repo: AuthRepository is noinit, writable

	# Verify user email address during signup
	#
	# If this option is set to `true`, popcorn will automatically send a verification
	# email when a new user signup. The user will then have to click the link in the
	# email to verify is email address.
	#
	# Default is `false`.
	#
	# See `require_verified_email`.
	#
	# Warning: This option requires `sendmail` to be installed and configured on the host.
	var verify_emails = false is writable

	# Require verified emails for signin
	#
	# If this option is set to `true`, popcorn will only allow signin for users
	# with verified email.
	#
	# Default is `false`.
	#
	# This option requires `verify_emails` to be set at `true`.
	var require_verified_email = false is writable

	# Email from address
	#
	# The sender email address used for the email verification and lost password emails.
	var email_from = "popcorn <popcorn@localhost>" is writable

	# Email verification subject line
	#
	# The subject line used for the verification email.
	var verification_email_subject = "Verify your email address" is writable

	# Email verification body
	#
	# The verification email body in `templates::macro` format.
	#
	# Available macros:
	# * `%URI%` the email verification URI generated by popcorn
	# * `%LOGIN%` the login provided by the user
	# * `%EMAIL%` the email provided by the user
	# * `%HOSTNAME%` the popcorn app host name
	#
	# If no macro `%URI%` is found in the template, the verification link is
	# appended at the end of the message.
	var verification_email_body = """
<h1>Welcome %LOGIN%,</h1>

<p>We're excited to have you on board!</p>

<p>But first thing first, we need you to verify your e-mail address.
Please click on the link below:</p>

<p><a href='%URI%'>%URI%</a></p>

<p>Thank you!</p>

<p><small>This e-mail was sent to you following the registration of %EMAIL%
on <a href='%HOSTNAME%'>%HOSTNAME%</a></small></p>""" is writable

	# Base URI used for the email verification link
	#
	# Will be appended with the email verification key.
	#
	# Default is `http://{app_hostname}/email` where `email` is the route to
	# the `AuthBasicEmailVerification` handler.
	#
	# This URI depends on the route used for the `AuthBasicRouter`.
	# For example, if you set the auth router on `/auth`, you must modify this URI
	# to reflect it:
	#
	# ~~~nitish
	# var config = new MyBasicConfig
	# config.parse_options(args)
	# config.verification_uri = "http://{config.app_hostname}/auth/email"
	#
	# var app = new App
	# app.use("/auth", new AuthBasicRouter(config))
	# ~~~
	var verification_uri = "http://{app_hostname}/email" is lazy, writable

	# URI where the user will be redirected to after email verification process
	#
	# Default is "/".
	#
	# Once the user has clicked the verification link into his email box,
	# he will be redirected to that URI.
	#
	# Popcorn will append the following parameters to the redirection:
	#  * `?email_verification=success`: if the verification process was executed successfully
	#  * `?email_verifiction=error_cause`: if something went wrong
	var verification_redirection_uri = "/" is writable

	# Send verification email to user
	#
	# See `verify_emails`
	fun send_verification_email(user: User) do
		var token = md5_salt(128)
		var uri = "{verification_uri}/{user.email.encode_base64}/{token}"

		var tpl = new TemplateString(verification_email_body)
		if tpl.has_macro("LOGIN") then tpl.replace("LOGIN", user.login)
		if tpl.has_macro("EMAIL") then tpl.replace("EMAIL", user.email)
		if tpl.has_macro("HOSTNAME") then tpl.replace("HOSTNAME", app_hostname)
		if tpl.has_macro("URI") then
			tpl.replace("URI", uri)
		else
			tpl.addn("<a href=\"{uri}\">{uri}</a>")
		end
		var body = tpl.write_to_string

		var mail = new Mail(email_from, verification_email_subject, body)
		mail.to.add user.email
		mail.header["Content-Type"] = "text/html"
	    mail.send

		user.email_is_verified = false
		user.email_verification_token = token
		auth_repo.save user
	end

	# Lost password email subject line
	#
	# The subject line used for the lost password email.
	var lost_password_email_subject = "Reset your password" is writable

	# Lost password email body
	#
	# The lost password email body in `templates::macro` format.
	#
	# Available macros:
	# * `%URI%` the reset password URI generated by popcorn
	# * `%LOGIN%` the login provided by the user
	# * `%EMAIL%` the email provided by the user
	# * `%HOSTNAME%` the popcorn app host name
	#
	# If no macro `%URI%` is found in the template, the reset password link will
	# be appended at the end of the message.
	var lost_password_email_body = """
<h1>Hi %LOGIN%,</h1>

<p>Forgot something?</p>

<p>Click on the link below to reset your password:</p>
<p><a href='%URI%'>%URI%</a></p>

<p>Thank you!</p>""" is writable

	# Base URI used for email password reset
	#
	# Will be appended with `?token=TOKEN` where `TOKEN` is the reset password
	# token generated by nitcorn.
	#
	# Default is "http://{app_hostname}/password/reset"
	#
	# Depends on the route used for password reseting (you have to implement that route).
	#
	# See `AuthBasicResetPassword` for more details on how reset user passwords.
	# See `examples/basic_auth` for an example on how to handle password reset.
	var lost_password_uri = "http://{app_hostname}/password/reset" is lazy, writable

	# Send the lost password email to `user`
	fun send_lost_password_email(user: User) do
		var token = md5_salt(128)
		var uri = "{lost_password_uri}?token={token}"

		var tpl = new TemplateString(lost_password_email_body)
		if tpl.has_macro("LOGIN") then tpl.replace("LOGIN", user.login)
		if tpl.has_macro("EMAIL") then tpl.replace("EMAIL", user.email)
		if tpl.has_macro("HOSTNAME") then tpl.replace("HOSTNAME", app_hostname)
		if tpl.has_macro("URI") then
			tpl.replace("URI", uri)
		else
			tpl.addn("<a href=\"{uri}\">{uri}</a>")
		end
		var body = tpl.write_to_string

		var mail = new Mail(email_from, lost_password_email_subject, body)
		mail.to.add user.email
		mail.header["Content-Type"] = "text/html"
	    mail.send

		user.reset_password_token = token
		auth_repo.save user
	end

	# Encrypt password with a random md5 salt
	#
	# Returns the couple(hash, salt).
	fun encrypt_password(password: String): Couple[String, String] do
		var salt = md5_salt(16)
		var hash = "{password}+{salt}".md5
		return new Couple[String, String](hash, salt)
	end

	# Try the couple `(login, password)` against the repo
	#
	# Returns the user that matches the credentials or `null` if the authentification failed.
	fun try_credentials(login, password: String): nullable User do
		var user = auth_repo.find_by_login(login)
		if user == null then return null
		var hash = "{password}+{user.password_salt}".md5
		if hash != user.password_hash then return null
		return user
	end
end

#########
# Model #
#########

# A User that can signup/signin/signout on the app
class User
	super RepoObject
	serialize

	# User unique id
	var login: String

	# User email, also unique
	var email: String is writable

	# User salted and hashed password
	var password_hash: String is writable

	# Random salt used for password hashing
	var password_salt: String is writable

	# Is the user email verified?
	#
	# See `AppConfig::verify_emails`
	var email_is_verified = false

	# Email verification token or null if not in verification process
	private var email_verification_token: nullable String = null

	# Reset password token or null if not in reset process
	private var reset_password_token: nullable String = null
end

# Authentification repository
#
# You must provide one to the basic auth api.
#
# You must implement the following methods according to your database backend:
# * `find_by_login`: to find a user by it's login
# * `find_by_email`: to finf a user by it's email
#
# Here an example with a MongoDB repository:
# ~~~nit
# # The user repository used has to implement the AuthRepository methods
# class MyAuthRepo
#	super AuthRepository
#	super MongoRepository[User]
#
#	redef fun find_by_login(login) do
#		return find((new MongoMatch).eq("login", login))
#	end
#
#	redef fun find_by_email(email) do
#		return find((new MongoMatch).eq("email", email))
#	end
# end
# ~~~
interface AuthRepository
	super Repository[User]

	# Get the user with `login` or `null` if not found
	#
	# Used to check logins unicity and for the login process.
	fun find_by_login(login: String): nullable User is abstract

	# Get the user with `email` or `null` if not found
	#
	# User to check emails unicity and for the email verification and reset password processes.
	fun find_by_email(email: String): nullable User is abstract
end

redef class Session
	# Authentified user in the current session or `null` if no authentification
	var user: nullable User = null is writable
end

# Authentification API router
#
# Use this router in your app to enable basic authentification.
#
# ~~~nitish
# # Prepare the config from command args
# var config = new MyBasicConfig
# config.parse_options(args)
#
# # Set basic auth config
# config.email_from = "Test <test@nitlanguage.org>"
# config.lost_password_uri = "http://localhost:3000/reset_password"
#
# var app = new App
# app.use_before("/*", new SessionInit)
#
# # We add the basic auth router to our app
# app.use("/api/auth", new AuthBasicRouter(config))
# # add other routes...
# ~~~
class AuthBasicRouter
	super Router

	# App configuration
	var config: AppConfig

	redef init do
		use("/signin", new AuthBasicSignin(config))
		use("/signout", new AuthBasicSignout)
		use("/signup", new AuthBasicSignup(config))
		if config.verify_emails then
			use("/email/:email/:token", new AuthBasicEmailVerification(config))
		end
		use("/password/lost", new AuthBasicLostPassword(config))
		use("/password/reset", new AuthBasicResetPassword(config))
		use("/", new UserHandler)
	end
end

##########
# Signup #
##########

# Signup: register a new user
#
# POST: register a user from a SignupForm and return the created user.
# ~~~raw
#	expected body input: see `SignupForm`
#	validation: see `SignupValidator`
#	return: the newly created user
#	errors:
#		400: bad input / validation error
#		500: session error
# ~~~
class AuthBasicSignup
	super Handler

	# App configuration to access the `AppConfig::auth_repo`
	var config: AppConfig

	redef var validator = new SignupValidator(config.auth_repo) is lateinit

	redef type BODY: SignupForm

	redef fun new_body_object(des) do return new SignupForm.from_deserializer(des)

	# Create a new user from `form` data.
	#
	# Encrypts the password with `AppConfig::encrypt_password` and save the user
	# in `AppConfig::auth_repo`.
	fun create_user(form: SignupForm): User do
		var creds = config.encrypt_password(form.password1)
		var user = new User(form.login, form.email, creds.first, creds.second)
		config.auth_repo.save user
		return user
	end

	redef fun post(req, res) do
		var body = validate_body(req, res)
		if body == null then return

		var form = deserialize_body(req, res)
		if form == null then return

		var user = create_user(form)

		if config.verify_emails then
			config.send_verification_email(user)
		end

		if not config.require_verified_email then
			var session = req.session
			if session == null then
				res.json_error("No session", 500)
				return
			end
			session.user = user
		end

		res.json user
	end
end

# Expected input for `AuthBasicSignup`
class SignupForm
	serialize

	# User desired login
	var login: String

	# User password
	var password1: String

	# Repeat the user password
	var password2: String

	# User email
	#
	# Popcorn will try to validate it if `AppConfig::validate_emails == true`.
	var email: String
end

# Validate input for `SignupForm`
class SignupValidator
	super ObjectValidator

	# AuthRepository used to check login and email unicity
	var auth_repo: AuthRepository

	redef init do
		add new UniqueSigninField(auth_repo=auth_repo, field="login", min_size=4, max_size=255)
		add new StringField("password1", min_size=6, max_size=255)
		add new FieldsMatch("password2", "password1")
		add new UniqueEmailField(auth_repo=auth_repo, field="email")
	end
end

# Check login format and unicity
class UniqueSigninField
	super UniqueField

	# AuthRepository used to check login unicity
	var auth_repo: AuthRepository

	redef fun check_unicity(v, field, val) do
		var user = auth_repo.find_by_login(val)
		if user != null then
			v.validation.add_error(field, "Signin `{val}` already used")
			return false
		end
		return true
	end
end

# Check email format and unicity
class UniqueEmailField
	super EmailField
	super UniqueField

	# AuthRepository used to check email unicity
	var auth_repo: AuthRepository

	redef fun check_unicity(v, field, val) do
		var user = auth_repo.find_by_email(val)
		if user != null then
			v.validation.add_error(field, "Email `{val}` already used")
			return false
		end
		return true
	end
end

##########
# Signin #
##########

# Signin: try to signin a registered user
#
# POST: submit user credential from a SigninForm and return the signed-in user.
# ~~~raw
#	expected body input: see `SigninForm`
#	validation: see `SigninValidator`
#	return: the signed-in user
#	errors:
#		400: bad input / form validation error
#		403: bad credentials / email not verified
#		500: session error
# ~~~
class AuthBasicSignin
	super Handler

	# App configuration to access the `AppConfig::auth_repo`
	var config: AppConfig

	redef var validator = new SigninValidator is lateinit

	redef type BODY: SigninForm

	redef fun new_body_object(des) do return new SigninForm.from_deserializer(des)

	redef fun post(req, res) do
		var body = validate_body(req, res)
		if body == null then return

		var form = deserialize_body(req, res)
		if form == null then return

		var user = config.try_credentials(form.login, form.password)
		if user == null then
			res.json_error("Bad credentials", 403)
			return
		end

		if config.require_verified_email and not user.email_is_verified then
			res.json_error("Verified email required", 403)
			return
		end

		var session = req.session
		if session == null then
			res.json_error("No session", 500)
			return
		end
		session.user = user
		res.json user
	end
end

# Expected input for `AuthBasicSignin`
class SigninForm
	serialize

	# User login
	var login: String

	# User password (unhashed/unsalted)
	var password: String
end

# Validate `SigninForm` inputs
class SigninValidator
	super ObjectValidator

	redef init do
		add new StringField("login", min_size=4, max_size=255)
		add new StringField("password", min_size=6, max_size=255)
	end
end

###########
# Signout #
###########

# Signout: try to sign-out a signed-in user
# ~~~raw
# GET: sign-out the signed-in user.
#	return: true if the user was successfully signed-out.
#	errors:
#		403: no current session
# ~~~
class AuthBasicSignout
	super Handler

	redef fun get(req, res) do
		var session = req.session
		if session == null then
			res.json_error("No session", 403)
			return
		end
		session.user = null
		res.json true
	end
end

######################
# Email Verification #
######################

# Check the verification token from a email verification link.
#
# This is the landing route for a user that clicks on a verification link from
# its email box.
#
# GET: submit user verification email and token from get args
# ~~~raw
#	intputs:
#		get arg `email`: base64 encoded email to verify
#		get arg `token`: popcorn generated token for email verification
# ~~~
#
# Once the verification process is over, the user will be redirected to
# `AppConfig::verification_redirection_uri`.
# You must implement the redirection route yourself to inform the user that the
# verification process was successful or if there was errors.
#
# Popcorn will pass the following parameters to your redirected route:
#  * `?email_verification=success`: if the verification process was executed successfully
#  * `?email_verification=error_cause`: if something went wrong
class AuthBasicEmailVerification
	super Handler

	# App configuration to access the `AppConfig::auth_repo`
	var config: AppConfig

	redef fun get(req, res) do
		var email = req.param("email")
		var token = req.param("token")
		var uri = config.verification_redirection_uri

		if email == null or token == null then
			uri = "{uri}?email_verification=bad_parameters"
			res.redirect uri
			return
		end

		var user = config.auth_repo.find_by_email(email.decode_base64.to_s)
		if user == null then
			uri = "{uri}?email_verification=bad_email"
			res.redirect uri
			return
		end

		if token != user.email_verification_token then
			uri = "{uri}?email_verification=bad_token"
			res.redirect uri
			return
		end

		user.email_is_verified = true
		user.email_verification_token = null
		config.auth_repo.save(user)

		var session = req.session
		if session == null then
			res.json_error("No session", 500)
			return
		end
		session.user = user

		uri = "{uri}?email_verification=success"
		res.redirect uri
	end
end

##################
# Lost passwords #
##################

# Send the reset password email to user
#
# POST: send a reset password email
# ~~~raw
#	expected body input: see `LostPasswordForm`
#	validation: see `LostPasswordValidator`
#	return: a message explaining that the email was sent
#	errors:
#		400: bad input / form validation error
#		404: email not found
# ~~~
#
# See `AppConfig::send_lost_password_email` for more details on the lost password process.
class AuthBasicLostPassword
	super Handler

	# App configuration to access the `AppConfig::auth_repo`
	var config: AppConfig

	redef var validator = new LostPasswordValidator is lateinit

	redef type BODY: LostPasswordForm

	redef fun new_body_object(des) do return new LostPasswordForm.from_deserializer(des)

	redef fun post(req, res) do
		var body = validate_body(req, res)
		if body == null then return

		var form = deserialize_body(req, res)
		if form == null then return

		var user = config.auth_repo.find_by_email(form.email)
		if user == null then
			res.json_error("Email not found", 404)
			return
		end

		config.send_lost_password_email(user)

		var message = new JsonObject
		message["message"] = "An email was sent to {form.email}"
		res.json message
	end
end

# Expected input for `AuthBasicLostPassword`
class LostPasswordForm
	serialize

	# The email of the user who forgot is password
	var email: String
end

# Validate `LostPasswordForm`
class LostPasswordValidator
	super ObjectValidator

	redef init do
		add new EmailField("email")
	end
end

# Change password for user (reset process)
#
# POST: submit email new password and reset token
# ~~~raw
#	expected body input: see `ResetPasswordForm`
#	validation: see `ResetPasswordValidator`
#	return: the update `User` object
#	errors:
#		400: bad input / form validation error
#		403: bad token
#		404: user not found
# ~~~
class AuthBasicResetPassword
	super Handler

	# App configuration to access the `AppConfig::auth_repo`
	var config: AppConfig

	redef var validator = new ResetPasswordValidator is lateinit

	redef type BODY: ResetPasswordForm

	redef fun new_body_object(des) do return new ResetPasswordForm.from_deserializer(des)

	redef fun post(req, res) do
		var body = validate_body(req, res)
		if body == null then return

		var form = deserialize_body(req, res)
		if form == null then return

		var user = config.auth_repo.find_by_login(form.login)
		if user == null then
			res.json_error("User not found", 404)
			return
		end

		if form.reset_token != user.reset_password_token then
			res.json_error("Bad token", 403)
			return
		end
		var creds = config.encrypt_password(form.password1)
		user.password_hash = creds.first
		user.password_salt = creds.second
		user.reset_password_token = null
		config.auth_repo.save user

		res.json user
	end
end

# Expected input for `AuthBasicResetPassword`
class ResetPasswordForm
	serialize

	# Reset token allocated by popcorn (the one provded in the email)
	var reset_token: String

	# User login (matching the reset token)
	var login: String

	# New password
	var password1: String

	# Repeat new password
	var password2: String
end

# Validate `ResetPasswordForm` inputs.
class ResetPasswordValidator
	super ObjectValidator

	redef init do
		add new StringField("reset_token", required=true, min_size=128, max_size=128)
		add new StringField(field="login", min_size=4, max_size=255)
		add new StringField("password1", min_size=6, max_size=255)
		add new FieldsMatch("password2", "password1")
	end
end

#################
# User handlers #
#################

# Current session handler.
#
# GET: return the logged in user if any
# ~~~raw
#	errors:
#		401: not logged in
# ~~~
class UserHandler
	super Handler

	# Get the `user` of the current session or `null` if not authenticated
	fun get_authentification(req: HttpRequest, res: HttpResponse): nullable User do
		var session = req.session
		if session == null then return null
		return session.user
	end

	# Check if a user is authenticated for the current session and return it
	#
	# If no user is authenticated, answers 401 error and returns null.
	#
	# Use this method to restrict handler access to authenticated users only.
	#
	# ~~~
	# class SomeRestrictedHandler
	#	super UserHandler
	#
	#	# Restricted route to authenticated users
	#	redef fun get(req, res) do
	#		var user = require_authentification(req, res)
	#		if user == null then return # Let popcorn return a 401 error if not authenticated
	#
	#		# Do something with we authenticated user...
	#	end
	# end
	# ~~~
	fun require_authentification(req: HttpRequest, res: HttpResponse): nullable User do
		var user = get_authentification(req, res)
		if user == null then
			res.json_error("Unauthorized", 401)
			return null
		end
		return user
	end

	redef fun get(req, res) do
		var user = require_authentification(req, res)
		if user == null then return
		res.json user
	end
end
