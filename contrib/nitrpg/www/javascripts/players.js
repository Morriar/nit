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
		.module('players', ['ngSanitize', 'model'])

		.controller('PlayersCtrl', ['Players', '$scope', function(Players, $scope) {
			this.loadPlayers = function(skip, limit) {
				Players.findAll(skip, limit,
					function(data) {
						$scope.players = data;
					}, function(err) {
						$scope.error = err;
					});
			};
		}])

		.controller('PlayerCtrl', ['Players', 'Github', '$scope', function(Players, Github, $scope) {
			this.loadPlayer = function() {
				Players.find($scope.playerId,
					function(data) {
						$scope.player = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadEvents = function(skip, limit) {
				Players.findEvents($scope.playerId, skip, limit,
					function(data) {
						$scope.events = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadAchievements = function(skip, limit) {
				Players.findAchievements($scope.playerId, skip, limit,
					function(data) {
						$scope.achievements = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadReviews = function(skip, limit) {
				$scope.reviews = {
					total: 0,
					items: [],
					complete: true
				};
				Github.findIssues(
					"is:open label:need_review sort:updated-asc -involves:" + $scope.playerId,
					Math.floor(skip / limit) + 1, limit,
					function(data) {
						$scope.reviews.items = $scope.reviews.items.concat(data.items);
						$scope.reviews.total += data.total_count;
						$scope.reviews.complete = data.items.length >= data.total_count;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadTodos = function(skip, limit) {
				$scope.todos = {
					total: 0,
					items: [],
					complete: true
				};
				Github.findIssues(
					"is:open sort:updated-asc assignee:" + $scope.playerId,
					Math.floor(skip / limit) + 1, limit,
					function(data) {
						$scope.todos.items = $scope.todos.items.concat(data.items);
						$scope.todos.total += data.total_count;
						$scope.todos.complete = data.items.length >= data.total_count;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadStats = function() {
				Players.findStats($scope.playerId,
					function(data) {
						$scope.stats = data;
					}, function(err) {
						$scope.error = err;
					});
			};
		}])

		.controller('PlayerHomeCtrl', ['$scope', '$routeParams', function($scope, $routeParams) {
			$scope.playerId = $routeParams.playerId;
		}])

		.directive('playerLink', function() {
			return {
				restrict: 'E',
				templateUrl: '/directives/player-link.html',
				scope: {
					player: '='
				}
			};
		})

		.directive('playersList', function($rootScope) {
			return {
				restrict: 'E',
				templateUrl: '/directives/player-list.html',
				controller: 'PlayersCtrl',
				controllerAs: 'playersCtrl',
				scope: {
					short: '@'
				}
			};
		})

		.directive('playerPanel', function() {
			return {
				restrict: 'E',
				templateUrl: '/directives/player-panel.html',
				controller: 'PlayerCtrl',
				controllerAs: 'playerCtrl',
				scope: {
					playerId: '@'
				}
			};
		})

		.directive('playerEvents', function() {
			return {
				restrict: 'E',
				templateUrl: '/directives/event-list.html',
				controller: 'PlayerCtrl',
				controllerAs: 'eventsCtrl',
				scope: {
					playerId: '@',
					short: '@'
				}
			};
		})

		.directive('playerAchievements', function() {
			return {
				restrict: 'E',
				templateUrl: '/directives/achievement-list.html',
				controller: 'PlayerCtrl',
				controllerAs: 'achievementsCtrl',
				scope: {
					playerId: '@',
					short: '@'
				}
			};
		})

		.directive('playerReviews', function() {
			return {
				restrict: 'E',
				templateUrl: '/directives/review-list.html',
				controller: 'PlayerCtrl',
				controllerAs: 'todosCtrl',
				scope: {
					playerId: '@'
				}
			};
		})

		.directive('playerTodos', function() {
			return {
				restrict: 'E',
				templateUrl: '/directives/todo-list.html',
				controller: 'PlayerCtrl',
				controllerAs: 'todosCtrl',
				scope: {
					playerId: '@'
				}
			};
		})
})();
