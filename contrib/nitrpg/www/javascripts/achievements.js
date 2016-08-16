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
		.module('achievements', ['ngSanitize', 'model'])

		.controller('AchievementsCtrl', ['Achievements', '$scope', function(Achievements, $scope) {
			this.loadAchievements = function(skip, limit) {
				Achievements.findAll(skip, limit,
					function(data) {
						$scope.achievements = data;
					}, function(err) {
						$scope.error = err;
					});
			};
		}])

		.controller('AchievementCtrl', ['Achievements', '$scope', function(Achievements, $scope) {
			this.loadAchievement = function() {
				Achievements.find($scope.achievementId,
					function(data) {
						$scope.achievement = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadGames = function(skip, limit) {
				Achievements.findGames($scope.achievementId, skip, limit,
					function(data) {
						$scope.games = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadPlayers = function(skip, limit) {
				Achievements.findPlayers($scope.achievementId, skip, limit,
					function(data) {
						$scope.players = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadStats = function(skip, limit) {
				Achievements.findStats($scope.achievementId,
					function(data) {
						$scope.stats = data;
					}, function(err) {
						$scope.error = err;
					});
			};
		}])

		.controller('AchievementHomeCtrl', ['$scope', '$routeParams', function($scope, $routeParams) {
			$scope.achievementId = $routeParams.achievementId;
		}])

		.directive('achievementLink', function() {
			return {
				restrict: 'E',
				templateUrl: '/directives/achievement-link.html',
				scope: {
					achievement: '='
				}
			};
		})

		.directive('achievementsList', function() {
			return {
				restrict: 'E',
				templateUrl: '/directives/achievement-list.html',
				controller: 'AchievementsCtrl',
				controllerAs: 'achievementsCtrl',
				scope: {
					short: '@'
				}
			};
		})

		.directive('achievementPanel', function() {
			return {
				restrict: 'E',
				templateUrl: '/directives/achievement-panel.html',
				controller: 'AchievementCtrl',
				controllerAs: 'achievementCtrl',
				scope: {
					achievementId: '@'
				}
			};
		})

		.directive('achievementPlayers', function() {
			return {
				restrict: 'E',
				templateUrl: '/directives/player-list.html',
				controller: 'AchievementCtrl',
				controllerAs: 'playersCtrl',
				scope: {
					achievementId: '@',
					short: '@'
				}
			};
		})

		.directive('achievementGames', function() {
			return {
				restrict: 'E',
				templateUrl: '/directives/game-list.html',
				controller: 'AchievementCtrl',
				controllerAs: 'gamesCtrl',
				scope: {
					achievementId: '@',
					short: '@'
				}
			};
		})
})();
