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
		.module('user', [ 'auth',  'sites' ])

		.controller('UserCtrl', ['Auth', 'Sites', '$scope', '$window', '$location', function(Auth, Sites, $scope, $window, $location) {
			this.findSites = function() {
				Sites.findAll(
					function(data) {
						$scope.sites = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.currentUser = function() {
				Auth.getAuthUser(
					function(data) {
						$scope.user = data;
					}, function(err) {
						$scope.message = {status: "danger", message: err };
					});
			};

			this.currentUser();
			this.findSites();
		}])
})();
