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
	angular
		.module('events', ['ngSanitize', 'model'])

		.controller('EventsCtrl', ['Events', '$scope', function(Events, $scope) {
			this.loadEvents = function(skip, limit) {
				Events.findAll(skip, limit,
					function(data) {
						$scope.events = data;
					}, function(err) {
						$scope.error = err;
					});
			};
		}])

		.controller('EventCtrl', ['Events', '$scope', function(Events, $scope) {
			this.loadEvent = function() {
				Events.find($scope.eventId,
					function(data) {
						$scope.event = data;
					}, function(err) {
						$scope.error = err;
					});
			};
		}])

		.controller('EventHomeCtrl', ['$scope', '$routeParams', function($scope, $routeParams) {
			$scope.eventId = $routeParams.eventId;
		}])

		.directive('eventsList', function() {
			return {
				restrict: 'E',
				templateUrl: '/directives/event-list.html',
				controller: 'EventsCtrl',
				controllerAs: 'eventsCtrl',
				scope: {
					short: '@'
				}
			};
		})

		.directive('eventLink', function() {
			return {
				restrict: 'E',
				templateUrl: '/directives/event-link.html',
				scope: {
					event: '='
				}
			};
		})

		.directive('eventPanel', function() {
			return {
				restrict: 'E',
				templateUrl: '/directives/event-panel.html',
				controller: 'EventCtrl',
				controllerAs: 'eventCtrl',
				scope: {
					eventId: '@'
				}
			};
		})

		.directive('eventTitle', function() {
			return {
				restrict: 'E',
				templateUrl: '/directives/event-title.html',
				controller: 'EventCtrl',
				controllerAs: 'eventCtrl',
				scope: {
					event: '='
				}
			};
		})
})();
