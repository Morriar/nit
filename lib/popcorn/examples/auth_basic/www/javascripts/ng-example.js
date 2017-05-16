/*
 * Copyright 2016 Alexandre Terrasa <alexandre@moz-code.org>.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

(function() {
	angular.module('ng-example', [])

	.config(function($locationProvider) {
		$locationProvider.html5Mode(true);
	})

	.controller('AuthCtrl', function($http, $location) {
		var vm = this;
		vm.signupForm = {};
		vm.signinForm = {};
		vm.lostPasswordForm = {};
		vm.resetPasswordForm = {};

		vm.emailStatus = $location.search().email_verification;
		vm.resetPasswordForm.reset_token = $location.search().token;

		if(vm.resetPasswordForm.reset_token) {
			$('#resetPasswordModal').modal('show');
		}

		this.loadSession = function() {
			$http.get('/api/auth')
				.success(function(data) {
					vm.user = data;
				}).error(function(err) {
					vm.user = null;
				});
		}

		this.signup = function() {
			$http.post('/api/auth/signup', vm.signupForm)
				.success(function(data) {
					vm.user = data;
					vm.showSignupForm = false;
				}).error(function(err) {
					vm.signupErrors = err.errors;
				});
		}

		this.signin = function() {
			$http.post('/api/auth/signin', vm.signinForm)
				.success(function(data) {
					vm.user = data;
					vm.showSigninForm = false;
				}).error(function(err) {
					vm.signinErrors = err.errors;
					if(!err.errors) vm.signinErrors = { credentials: "Bad credentials" }
				});
		}

		this.signout = function() {
			$http.get('/api/auth/signout')
				.success(function(data) {
					vm.user = null;
					vm.showSigninForm = true;
				}).error(function(err) {
					vm.signoutErrors = err;
				});
		}

		this.lostPassword = function() {
			$http.post('/api/auth/password/lost', vm.lostPasswordForm)
				.success(function(data) {
					$('#lostPasswordModal').modal('hide');
				}).error(function(err) {
					vm.lostPasswordErrors = err.errors;
					if(err.status == 404) vm.lostPasswordErrors = { email: ["Unknown email"] }
				});
		}

		this.resetPassword = function() {
			$http.post('/api/auth/password/reset', vm.resetPasswordForm)
				.success(function(data) {
					$('#resetPasswordModal').modal('hide');
				}).error(function(err) {
					vm.resetPasswordErrors = err.errors;
					if(err.status == 404) vm.resetPasswordErrors = { login: ["Unknown login"] }
				});
		}

		this.loadSession();
	})
})();
