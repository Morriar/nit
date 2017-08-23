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
		.module('ui', [])

		/* Search */

		.config(function($stateProvider, $locationProvider) {
			$stateProvider
				.state('search', {
					url: '/search?q&p&n&filters',
					controller: 'SearchCtrl',
					controllerAs: 'vm',
					templateUrl: 'views/search.html',
					resolve: {
						entities: function(Model, $q, $stateParams, $state) {
							var d = $q.defer();
							var query = $stateParams.q;
							var page = $stateParams.p ? $stateParams.p : 1;
							var limit = $stateParams.n ? $stateParams.n : 10;
							var filters = $stateParams.filters ? $stateParams.filters : '';
							Model.search(query, page, limit, filters, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						}
					}
				})
		})

		.controller('SearchCtrl', function($scope, $state, $stateParams, entities) {
			var vm = this;
			vm.entities = entities;
			vm.query = $stateParams.q;
			vm.allowedFilters = ['no-empty-doc', 'no-test', 'no-fictive', 'no-attribute',
				'no-redef', 'no-inh', 'no-extern', 'min-visibility'];
			vm.defaultFilters = [];

			$scope.$on('change-page', function(e, page, limit) {
				$state.go('.', {q: vm.query, p: page, l: limit});
			})
		})

		.directive('uiSearchField', function($document) {
			return {
				restrict: 'E',
				replace: true,
				controller: function($scope, $state, $stateParams, $location, Model) {
					var vm = this;
					vm.search = function() {
						if(!vm.query) {
							vm.reset();
							return;
						}
						Model.search(vm.query, 1, 8, '',
							function(data) {
								vm.reset();
								vm.results = data;
							}, function(err) {
								vm.reset();
								vm.error = err;
							});
					}

					vm.reset = function() {
						vm.activeItem = -1;
						vm.results = {
							results: []
						};
					}

					vm.update = function(e) {
						if(e.keyCode == 38) {
							vm.selectUp();
						} else if(e.keyCode == 40) {
							vm.selectDown();
						} else if(e.keyCode == 27) {
							vm.selectEscape();
						} else if(e.keyCode == 13) {
							vm.selectEnter();
						}
					}

					vm.selectUp = function() {
						if(vm.activeItem >= 0) {
							vm.activeItem -= 1;
						}
					}

					vm.selectDown = function() {
						if(vm.activeItem < vm.results.results.length) {
							vm.activeItem += 1;
						}
					}

					vm.selectEnter = function(e) {
						if(vm.activeItem >= 0 && vm.activeItem < vm.results.results.length) {
							$location.url(vm.results.results[vm.activeItem].web_url);
						} else {
							$state.go('search', {q: vm.query, p: 1});
						}
						vm.reset();
					}

					vm.selectEscape = function() {
						vm.reset();
					}

					vm.setActive = function(index) {
						vm.activeItem = index;
					}

					vm.reset();

					$scope.$watch(function() {
						return $stateParams.q;
					}, function(q) {
						if(q) vm.query = q;
					});
				},
				controllerAs: 'vm',
				templateUrl: 'directives/ui/search-field.html',
				link: function ($scope, element, attrs, ctrl) {
					$document.bind('click', function (event) {
						var isChild = $(element).has(event.target).length > 0;
						var isSelf = element[0] == event.target;
						var isInside = isChild || isSelf;
						if (!isInside) {
							ctrl.reset();
							$scope.$apply();
						}
					});
				}
			};
		})

		/* Filters */

		.directive('uiFilters', function() {
			return {
				restrict: 'E',
				scope: {},
				bindToController: {
					allowedFilters: '=',
					defaultFilters: '=',
					allowedGroups: '=',
					defaultGroup: '='
				},
				controller: function($scope, $state, $stateParams) {
					var vm = this;

					// Grouping

					if($stateParams.group_by) {
						vm.defaultGroup = $stateParams.group_by;
					}

					vm.group = function() {
						$state.go('.', {group_by: vm.defaultGroup}, {reload: true});
					};

					// Filtering

					vm.filterOptions = [];
					for(fi in vm.allowedFilters) {
						var filter = vm.allowedFilters[fi];
						if(filter == 'string') {
							vm.allowString = true;
							continue;
						}
						if(filter == 'min-visibility') {
							vm.allowVisibility = true;
							continue;
						}
						vm.filterOptions.push({ id: filter, label: filter });
					};

					vm.filterText = '';
					vm.minVisibility = 'protected';
					vm.showFilters = $stateParams.filters || $stateParams.group_by;

					vm.filterDefaults = [];
					for(fi in vm.defaultFilters) {
						var filter = vm.defaultFilters[fi];
						vm.filterDefaults.push({ id: filter, label: filter });
					};

					vm.initFilters = function() {
						var string = $stateParams.filters;
						if(!string) return vm.filterDefaults;

						var filters = [];
						var fs = string.split(',');
						for(fi in fs) {
							var ffs = fs[fi].split(':');
							switch(ffs[0]) {
								case 'string':
									vm.filterText = ffs[1];
									break;
								case 'min-visibility':
									vm.minVisibility = ffs[1];
									break;
								case 'no-attribute':
									filters.push({ id: 'no-attribute' });
									break;
								case 'no-test':
									filters.push({ id: 'no-test' });
									break;
								case 'no-fictive':
									filters.push({ id: 'no-fictive' });
									break;
								case 'no-redef':
									filters.push({ id: 'no-redef' });
									break;
								case 'no-extern':
									filters.push({ id: 'no-extern' });
									break;
								case 'no-inh':
									filters.push({ id: 'no-inh' });
									break;
								case 'no-empty-doc':
									filters.push({ id: 'no-empty-doc' });
									break;
							}
						}
						return filters;
					}

					vm.filtersToString = function() {
						var string = 'min-visibility:' + vm.minVisibility + ',';
						if(vm.filterText) {
							string += 'string:' + vm.filterText + ',';
						}
						for(fi in vm.filterSelected) {
							string += vm.filterSelected[fi].id + ','
						}
						return string;
					}

					$scope.$on('ui-filters-changed', function(e) {
						vm.filter();
					})

					vm.filter = function() {
						$state.go('.', {filters: vm.filtersToString()}, {reload: true});
					};

					vm.visibility = function(visibility) {
						vm.minVisibility = visibility;
						vm.filter();
					};

					vm.filterSelected = vm.initFilters();
				},
				controllerAs: 'vm',
				replace: true,
				templateUrl: '/directives/ui/filters.html'
			};
		})

		.directive('uiSelectFilters', function() {
			return {
				restrict: 'E',
				scope: {},
				bindToController: {
					options: '=',
					selected: '='
				},
				controller: function($scope) {
					var vm = this;

					vm.settings = {
						showCheckAll: false,
						showUncheckAll: false,
						idProperty: 'id',
						smartButtonTextProvider: function(selected) {
							return selected.length + ' selected';
						}
					}

					vm.customTexts = {
						buttonDefaultText: 'none'
					}

					vm.events = {
						onSelectionChanged: function(selection) {
							$scope.$emit('ui-filters-changed', vm.selected);
						}
					}
				},
				controllerAs: 'vm',
				templateUrl: '/directives/ui/select-filters.html'
			}
		})

		/* Summaries */

		.directive('uiSummary', function($rootScope, $location, $anchorScroll) {
			return {
				restrict: 'E',
				scope: {
					target: '@'
				},
				replace: true,
				templateUrl: '/directives/ui-summary.html',
				link: function ($scope, element, attrs) {
					$scope.goTo = function(entity) {
						$location.hash(entity.id);
					}

					$scope.textToId = function(text) {
						return text.replace(/ /g, '-').replace(/[^A-Za-z_-]/g, '');
					}

					$rootScope.reloadSummary = function() {
						var h = angular.element(document.querySelectorAll(
							$scope.target + ' h1, ' +
							$scope.target + ' h2, ' +
							$scope.target + ' h3, ' +
							$scope.target + ' h4, ' +
							$scope.target + ' h5, ' +
							$scope.target + ' h6 '));

						$scope.headings = [];
						angular.forEach(h, function(heading) {
							var head = angular.element(heading);
							if(!head.is(':visible')) { return ; }
							var text = head.text().trim();
							var id = $scope.textToId(text);
							if(!head.attr('id')) {
								head.attr('id', id);
							} else {
								id = head.attr('id');
							}
							$scope.headings.push({
								id: id,
								text: text,
								level: parseInt(head[0].nodeName[1])
							});
						});
						$anchorScroll();
					}

					$scope.$watch('target', function() {
						setTimeout(function() {
							$rootScope.reloadSummary();
						}, 100);
					});
				}
			};
		})

		/* Pagination */

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

					$scope.$watch('pagination.pagination', function(pagination) {
						if(!pagination) return;
						vm.computePages(pagination);
					})

					vm.computePages = function(pagination) {
						vm.pages = [];
						var len = 11;
						var page = pagination.page;
						var start = page - Math.floor(len / 2);
						var end = page + Math.floor(len / 2);

						if(start < 1) {
							end = Math.min(pagination.max, end + Math.abs(start) + 1)
							start = 1
						} else if(end > pagination.max) {
							start = Math.max(1, start - Math.abs(end - pagination.max))
							end = pagination.max;
						}

						for(var i = start; i <= end; i++) {
							vm.pages.push(i);
						}
					}

					vm.changePage = function(page, limit) {
						if(page <= 0 || page > vm.pagination.max) return;
						var suffix = vm.suffix ? vm.suffix : '';
						$scope.$emit('change-page' + suffix, page, limit);
					}
				},
				controllerAs: 'pagination',
				templateUrl: 'directives/ui/pagination.html'
			};
		})
})();
