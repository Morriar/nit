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
	var apiUrl = '/api';

	angular
		.module('auth', [])

		.factory('Auth', [ '$http', function($http) {
			return {

				signin: function(user, cb, cbErr) {
					$http.post(apiUrl + '/auth/signin', user)
						.success(cb)
						.error(cbErr);
				},

				login: function(user, cb, cbErr) {
					$http.post(apiUrl + '/auth/login', user)
						.success(cb)
						.error(cbErr);
				},

				logout: function(cb, cbErr) {
					$http.get(apiUrl + '/auth/logout')
						.success(cb)
						.error(cbErr);
				},

				getAuthUser: function(cb, cbErr) {
					$http.get(apiUrl + '/auth')
						.success(cb)
						.error(cbErr);
				},

				editAuthUser: function(user, cb, cbErr) {
					$http.post(apiUrl + '/auth', user)
						.success(cb)
						.error(cbErr);
				}
			};
		}])

		.controller('AuthCtrl', ['Auth', '$scope', '$window', '$location', function(Auth, $scope, $window, $location) {
			$ctrl = this;
			$scope.user = {};

			this.signinUser = function() {
				Auth.signin($scope.user,
					function(data) {
						$scope.user = {};
						$location.path('/login');
					}, function(err) {
						$scope.message = {status: "danger", message: err };
					});
			};

			this.loginUser = function() {
				Auth.login($scope.user,
					function(data) {
						$scope.user = data;
						$window.location.replace('/user');
					}, function(err) {
						$scope.message = {status: "danger", message: err };
					});
			};

			this.logoutUser = function(login) {
				Auth.logout(
					function(data) {
						$scope.user = null;
						$window.location.replace('/');
					}, function(err) {
						$scope.message = {status: "danger", message: err };
					});
			};

			this.currentUser = function() {
				Auth.getAuthUser(
					function(data) {
						$scope.user = data;
					}, function(err) {
						//$scope.message = {status: "danger", message: err };
					});
			};

			this.editCurrentUser = function() {
				Auth.editAuthUser($scope.user,
					function(data) {
						$scope.message = {status: "success", message: "Saved" };
						$scope.user = data;
					}, function(err) {
						$scope.message = {status: "danger", message: err };
					});
			};

			this.currentUser();
		}])

		.directive('menuUser', ['Auth', '$rootScope', function(Auth, $rootScope) {
			return {
				restrict: 'E',
				scope: {},
				templateUrl: '/directives/menu-user.html',
				link: function ($scope, element, attrs) {
					$scope.refresh = function() {
						Auth.getAuthUser(
							function(data) {
								$scope.user = data;
							}, function(err) {
								$scope.message = {status: "danger", message: err };
							});
					};
					$scope.refresh();
				}
			};
		}])
})();
