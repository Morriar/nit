/*
 * Copyright 2017 Alexandre Terrasa <alexandre@moz-code.org>.
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
	angular.module('nitindex', ['ui.router', 'angular-loading-bar'])

	.config(['cfpLoadingBarProvider', function(cfpLoadingBarProvider) {
		cfpLoadingBarProvider.includeSpinner = false;
	}])

	.run(['$anchorScroll', function($anchorScroll) {
		$anchorScroll.yOffset = 80;
	}])

	.config(function($stateProvider, $locationProvider) {
		$stateProvider
			.state('home', {
				url: '/?q&p&n',
				controller: 'HomeCtrl',
				controllerAs: 'vm',
				templateUrl: 'views/index.html'
			})
			.state('search', {
				url: '/search?q&p&n',
				controller: 'SearchCtrl',
				controllerAs: 'vm',
				templateUrl: 'views/search.html'
			})
		$locationProvider.html5Mode(true);
	})

	/* Factories */

	.factory('Search', [ '$http', function($http) {
		return {
			search: function(q, p, n, cb, cbErr) {
				$http.get('/api/search?q=' + q + '&p=' + p + '&n=' + n)
					.success(cb)
					.error(cbErr);
			}
		};
	}])

	/* Controllers */

	.controller('HomeCtrl', function(Search, $scope, $state, $stateParams) {
		var vm = this;
	})

	.controller('SearchCtrl', function(Search, $scope, $state, $stateParams) {
		var vm = this;
		vm.query = $stateParams.q;
		vm.page = $stateParams.p ? $stateParams.p : 1;
		vm.limit = $stateParams.l ? $stateParams.l : 10;

		$scope.$on('change-page', function(e, page, limit) {
			$state.go('search', {q: vm.query, p: page, l: limit});
		})

		vm.loadPage = function(query, page, limit) {
			Search.search(query, page, limit,
				function(data) {
					vm.results = data;
				}, function(err) {
					vm.error = err;
				});
		}

		vm.loadPage(vm.query, vm.page, vm.limit);
	})

	/* Directives */

	.directive('uiSearchField', function() {
		return {
			restrict: 'E',
			replace: true,
			controller: function($scope, $state, $stateParams) {
				
				var vm = this;
				vm.search = function() {
					$state.go('search', {q: vm.query});
				}

				$scope.$watch(function() {
					return $stateParams.q;
				}, function(q) {
					if(q) vm.query = q;
				});
			},
			controllerAs: 'vm',
			templateUrl: 'directives/ui-search-field.html'
		};
	})

	.directive('uiPagination', function() {
		return {
			restrict: 'E',
			replace: true,
			bindToController: {
				pagination: '=',
				suffix: '=?'
			},
			controller: function($scope) {
				var vm = this;

				vm.pages = [];
				var page = 0;
				while(page < vm.pagination.max) {
					page++;
					vm.pages.push(page);
				}

				vm.changePage = function(page, limit) {
					var suffix = vm.suffix ? vm.suffix : '';
					$scope.$emit('change-page' + suffix, page, limit);
				}
			},
			controllerAs: 'pagination',
			templateUrl: 'directives/ui-pagination.html'
		};
	})
})();
