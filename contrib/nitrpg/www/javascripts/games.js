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
		.module('games', ['ngSanitize', 'model'])

		.controller('GamesCtrl', ['Games', '$scope', function(Games, $scope) {
			this.loadGames = function(skip, limit) {
				Games.findAll(skip, limit,
					function(data) {
						$scope.games = data;
					}, function(err) {
						$scope.error = err;
					});
			};
		}])

		.controller('GameCtrl', ['Games', '$scope', function(Games, $scope) {
			this.loadGame = function() {
				Games.find($scope.gameId,
					function(data) {
						$scope.game = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadPlayers = function(skip, limit) {
				Games.findPlayers($scope.gameId, skip, limit,
					function(data) {
						$scope.players = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadEvents = function(skip, limit) {
				Games.findEvents($scope.gameId, skip, limit,
					function(data) {
						$scope.events = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadAchievements = function(skip, limit) {
				Games.findAchievements($scope.gameId, skip, limit,
					function(data) {
						var items = [];
						$scope.achievements = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadStats = function() {
				Games.findStats($scope.gameId,
					function(data) {
						$scope.stats = data;
					}, function(err) {
						$scope.error = err;
					});
			};
		}])

		.controller('GameHomeCtrl', ['$scope', '$routeParams', function($scope, $routeParams) {
			$scope.gameId = $routeParams.user + "/" + $routeParams.repo;
		}])

		.directive('gameLink', function() {
			return {
				restrict: 'E',
				templateUrl: '/directives/game-link.html',
				scope: {
					game: '='
				}
			};
		})

		.directive('gamesList', function() {
			return {
				restrict: 'E',
				templateUrl: '/directives/game-list.html',
				controller: 'GamesCtrl',
				controllerAs: 'gamesCtrl',
				scope: {
					short: '@'
				}
			};
		})

		.directive('gamePanel', function() {
			return {
				restrict: 'E',
				templateUrl: '/directives/game-panel.html',
				controller: 'GameCtrl',
				controllerAs: 'gameCtrl',
				scope: {
					gameId: '@'
				}
			};
		})

		.directive('gamePlayers', function() {
			return {
				restrict: 'E',
				templateUrl: '/directives/player-list.html',
				controller: 'GameCtrl',
				controllerAs: 'playersCtrl',
				scope: {
					gameId: '@',
					short: '@'
				}
			};
		})

		.directive('gameEvents', function() {
			return {
				restrict: 'E',
				templateUrl: '/directives/event-list.html',
				controller: 'GameCtrl',
				controllerAs: 'eventsCtrl',
				scope: {
					gameId: '@',
					short: '@'
				}
			};
		})

		.directive('gameAchievements', function() {
			return {
				restrict: 'E',
				templateUrl: '/directives/achievement-list.html',
				controller: 'GameCtrl',
				controllerAs: 'achievementsCtrl',
				scope: {
					gameId: '@',
					short: '@'
				}
			};
		})

		.directive('gamePodium', function() {
			return {
				restrict: 'E',
				templateUrl: '/directives/game-podium.html',
				controller: 'GameCtrl',
				controllerAs: 'playersCtrl',
				scope: {
					gameId: '@'
				}
			};
		})
})();
