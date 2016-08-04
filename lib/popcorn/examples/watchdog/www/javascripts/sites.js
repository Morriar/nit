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
		.module('sites', [])

		.factory('Sites', [ '$http', function($http) {
			return {

				findAll: function(cb, cbErr) {
					$http.get(apiUrl + '/user/sites')
						.success(cb)
						.error(cbErr);
				},

				find: function(id, cb, cbErr) {
					$http.get(apiUrl + '/user/sites/' + id)
						.success(cb)
						.error(cbErr);
				},

				create: function(site, cb, cbErr) {
					$http.post(apiUrl + '/user/sites', site)
						.success(cb)
						.error(cbErr);
				},

				edit: function(id, site, cb, cbErr) {
					$http.post(apiUrl + '/user/sites/' + id, site)
						.success(cb)
						.error(cbErr);
				},

				remove: function(id, cb, cbErr) {
					$http.delete(apiUrl + '/user/sites/' + id)
						.success(cb)
						.error(cbErr);
				},

				check: function(id, cb, cbErr) {
					$http.get(apiUrl + '/user/sites/' + id + '/check')
						.success(cb)
						.error(cbErr);
				},

				findStatuses: function(id, cb, cbErr) {
					$http.get(apiUrl + '/user/sites/' + id + '/status')
						.success(cb)
						.error(cbErr);
				},
			};
		}])

		.controller('SitesCtrl', ['Sites', '$scope', function(Sites, $scope) {
			$ctrl = this;
			$scope.site = {};

			this.findSites = function() {
				Sites.findAll(
					function(data) {
						$scope.sites = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.createSite = function() {
				Sites.create($scope.site,
					function(data) {
						$scope.message = {status: "success", message: "Created" };
						$ctrl.findSites();
					}, function(err) {
						$scope.message = {status: "danger", message: err };
					});
			};

			this.removeSite = function(id) {
				Sites.remove(id,
					function(data) {
						$scope.message = {status: "success", message: "Removed" };
						$ctrl.findSites();
					}, function(err) {
						$scope.message = {status: "danger", message: err };
					});
			};

			this.findSites();
		}])

		.controller('SiteCtrl', ['Sites', '$scope', '$routeParams', function(Sites, $scope, $routeParams) {
			$ctrl = this;
			$scope.site = {};

			this.findSite = function() {
				Sites.find($routeParams.id,
					function(data) {
						$scope.site = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.findStatuses = function() {
				Sites.findStatuses($routeParams.id,
					function(data) {
						$scope.statuses = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.editSite = function() {
				Sites.edit($routeParams.id, $scope.site,
					function(data) {
						$scope.message = {status: "success", message: "Saved" };
						$scope.site = data;
					}, function(err) {
						$scope.message = {status: "danger", message: err };
					});
			};

			this.removeSite = function() {
				Sites.remove($routeParams.id,
					function(data) {
						$scope.message = {status: "success", message: "Removed" };
						$location.path('/user/sites');
					}, function(err) {
						$scope.message = {status: "danger", message: err };
					});
			};

			this.checkSite = function() {
				Sites.check($routeParams.id,
					function(data) {
						$scope.message = {status: "success", message: "Check started" };
						$ctrl.findStatuses();
					}, function(err) {
						$scope.message = {status: "danger", message: err };
					});
			};

			this.findSite();
			this.findStatuses();
		}])

		.directive('siteThumb', ['Sites', '$sce', function(Sites, $sce) {
			return {
				restrict: 'E',
				scope: {
					site: '='
				},
				templateUrl: '/directives/site-thumb.html',
				link: function ($scope, element, attrs) {
					$scope.refresh = function() {
						$scope.url = $sce.trustAsResourceUrl($scope.site.url);
						Sites.findStatuses($scope.site._id,
							function(data) {
								$scope.statuses = data;
								/*var last = $scope.statuses[0];
								if(!last) { return; }
								var base64 = btoa(last.text);
								var el = document.createElement('iframe');
								el.src = 'data:text/html;base64,' + base64;
								element.append(el);
console.log(el);*/
							}, function(err) {
								$scope.message = {status: "danger", message: err };
							});
					};
					$scope.refresh();
				}
			};
		}])
})();
