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
		.module('admin', [])

		.factory('AdminUsers', [ '$http', function($http) {
			return {

				findAll: function(cb, cbErr) {
					$http.get(apiUrl + '/users')
						.success(cb)
						.error(cbErr);
				},

				find: function(login, cb, cbErr) {
					$http.get(apiUrl + '/users/' + login)
						.success(cb)
						.error(cbErr);
				},

				create: function(user, cb, cbErr) {
					$http.post(apiUrl + '/users', user)
						.success(cb)
						.error(cbErr);
				},

				edit: function(login, user, cb, cbErr) {
					$http.post(apiUrl + '/users/' + login, user)
						.success(cb)
						.error(cbErr);
				},

				remove: function(login, cb, cbErr) {
					$http.delete(apiUrl + '/users/' + login)
						.success(cb)
						.error(cbErr);
				}
			};
		}])

		.controller('AdminUsersCtrl', ['AdminUsers', '$scope', function(AdminUsers, $scope) {
			$ctrl = this;
			$scope.user = {};

			this.findUsers = function() {
				AdminUsers.findAll(
					function(data) {
						$scope.users = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.createUser = function() {
				AdminUsers.create($scope.user,
					function(data) {
						$scope.message = {status: "success", message: "Created" };
						$ctrl.findUsers();
					}, function(err) {
						$scope.message = {status: "danger", message: err };
					});
			};

			this.removeUser = function(login) {
				AdminUsers.remove(login,
					function(data) {
						$scope.message = {status: "success", message: "Removed" };
						$ctrl.findUsers();
					}, function(err) {
						$scope.message = {status: "danger", message: err };
					});
			};

			this.findUsers();
		}])

		.controller('AdminUserCtrl', ['AdminUsers', '$scope', '$location', function(AdminUsers, $scope, $location) {
			this.findUser = function() {
				AdminUsers.find($routeParams.login,
					function(data) {
						$scope.user = data;
					}, function(err) {
						$scope.message = {status: "danger", message: err };
					});
			};

			this.editUser = function() {
				AdminUsers.edit($routeParams.login, $scope.user,
					function(data) {
						$scope.message = {status: "success", message: "Saved" };
						$scope.user = data;
					}, function(err) {
						$scope.message = {status: "danger", message: err };
					});
			};

			this.removeUser = function() {
				AdminUsers.remove($routeParams.login,
					function(data) {
						$scope.message = {status: "success", message: "Removed" };
						$location.path('/admin/users');
					}, function(err) {
						$scope.message = {status: "danger", message: err };
					});
			};

			this.findUser();
		}])
})();
