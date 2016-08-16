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
	angular.module('ng-app', ['ngRoute', 'ngSanitize', 'angular-loading-bar', 'games', 'players', 'events', 'achievements'])

	.config(['cfpLoadingBarProvider', function(cfpLoadingBarProvider) {
		cfpLoadingBarProvider.includeSpinner = false;
	}])

	.config(function($routeProvider, $locationProvider) {
		$routeProvider
			.when('/', {
				templateUrl: 'views/index.html'
			})
			.when('/games', {
				templateUrl: 'views/games.html'
			})
			.when('/games/:user/:repo', {
				templateUrl: 'views/game.html',
				controller : 'GameHomeCtrl'
			})
			.when('/games/:user/:repo/players', {
				templateUrl: 'views/game-players.html',
				controller : 'GameHomeCtrl'
			})
			.when('/games/:user/:repo/events', {
				templateUrl: 'views/game-events.html',
				controller : 'GameHomeCtrl'
			})
			.when('/games/:user/:repo/achievements', {
				templateUrl: 'views/game-achievements.html',
				controller : 'GameHomeCtrl'
			})
			.when('/players', {
				templateUrl: 'views/players.html',
			})
			.when('/players/:playerId', {
				templateUrl: 'views/player.html',
				controller : 'PlayerHomeCtrl'
			})
			.when('/players/:playerId/events', {
				templateUrl: 'views/player-events.html',
				controller : 'PlayerHomeCtrl'
			})
			.when('/players/:playerId/achievements', {
				templateUrl: 'views/player-achievements.html',
				controller : 'PlayerHomeCtrl'
			})
			.when('/events', {
				templateUrl: 'views/events.html',
			})
			.when('/events/:eventId', {
				templateUrl: 'views/event.html',
				controller : 'EventHomeCtrl'
			})
			.when('/achievements', {
				templateUrl: 'views/achievements.html',
			})
			.when('/achievements/:achievementId', {
				templateUrl: 'views/achievement.html',
				controller : 'AchievementHomeCtrl'
			})
			.otherwise({
				redirectTo: '/'
			});
		$locationProvider.html5Mode(true);
	})

	.directive('uiBreadcrumbs', function() {
		return {
			restrict: 'E',
			replace: true,
			templateUrl: '/directives/ui-breadcrumbs.html',
			controller: ['$rootScope', '$location', function($rootScope, $location) {
				$ctrl = this

				this.reload = function() {
					$rootScope.breadcrumbs = []
					var parts = $location.path().split("/")
					parts.shift()

					if(parts[0] == 'games' && parts.length > 2) {
						parts[1] = parts[1] + '/' + parts[2]
						parts.splice(2, 1)
					}

					var url = '/'
					for(var i = 0; i < parts.length; i++) {
						var part = parts[i]
						url += part + '/'
						$rootScope.breadcrumbs.push({ "title": part, "url": url })
					}
				}

    			$rootScope.$on( "$routeChangeStart", function(event, next, current) {
					$ctrl.reload();
				})

				$ctrl.reload();
			}]
		};
	})

	.directive('uiPagination', function() {
		return {
			restrict: 'E',
			replace: true,
			templateUrl: '/directives/ui-pagination.html',
			controller: [ '$scope', function($scope) {
				$scope.range = function() {
					var res = [];
					var pages = Math.floor($scope.total / $scope.limit) + 1
					if(pages > 11) {
						var currentPage = $scope.currentPage();
						for(var i = currentPage - 1; i >= currentPage - 5; i--) {
							if(i < 1) break;
							res.push(i);
						}
						var i = currentPage;
						while(res.length < 10) {
							if(i > pages) break;
							res.push(i);
							i++;
						}
					} else {
						var i = 1;
						while(i <= pages) {
							res.push(i);
							i++;
						}
					}
					return res;
				};

				$scope.currentPage = function() {
					return Math.floor($scope.skip / $scope.limit) + 1;
				};

				$scope.hasPrev = function() {
					return $scope.skip - $scope.limit >= 0;
				};

				$scope.prev = function() {
					if(!$scope.hasPrev()) { return; }
					$scope.refresh($scope.skip - $scope.limit, $scope.limit);
				};

				$scope.refresh = function(skip, limit) {
					$scope.load(skip, limit);
					$scope.skip = skip;
				};

				$scope.hasNext = function() {
					return $scope.skip + $scope.limit <= $scope.total;
				};

				$scope.next = function() {
					if(!$scope.hasNext()) { return; }
					$scope.refresh($scope.skip + $scope.limit, $scope.limit);
				};

				if(!$scope.skip) { $scope.skip = 0 }
				if(!$scope.limit) { $scope.limit = 10 }
			}],
			scope: {
				total: '=',
				skip: '=',
				limit: '=',
				load: '='
			}
		};
	});
})();
