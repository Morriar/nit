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
		.module('traffic', ['model'])

		.controller('TrafficCtrl', ['$routeParams', '$scope', 'Traffic', '$window', function($routeParams, $scope, Traffic, $window) {
			$scope.queries_limit = 10;
			$scope.services_limit = 50;

			this.loadAPIQueries = function() {
				Traffic.loadAPIQueries($scope.queries_limit,
					function(data) {
						$scope.pages = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadAPIServices = function() {
				Traffic.loadAPIServices($scope.services_limit,
					function(data) {
						$scope.services = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadAPITimes = function() {
				Traffic.loadAPITimes(
					function(data) {
						$scope.times = [];
						data.forEach(function(d) {
							$scope.times.push({
								timestamp: d._id,
								date: new Date(d._id * 1000),
								response_time: d.response_time,
								visits: d.visits
							});
						});
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadAPIBrowsers = function() {
				Traffic.loadAPIBrowsers(
					function(data) {
						$scope.browsers = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			angular.element($window).on('resize', function(){ $scope.$apply() });

			this.showMore = function() {
				$scope.queries_limit += 10;
				this.loadAPIQueries();
			}

			this.loadAPIServices();
			this.loadAPIQueries();
			this.loadAPITimes();
			this.loadAPIBrowsers();
		}])

		.directive('chartServicesTime', function() {
			return {
				restrict: 'E',
				scope: {
					data: '='
				},
				link: function($scope, $elem, $attrs) {
					$elem = $elem[0];

					var svg = d3.select($elem).append('svg');
					var width, height;
					var margin = 20;

					var xAxisG = svg.append('g').attr('class', 'axis x');
					var yAxisG = svg.append('g').attr('class', 'axis y');
					var linePath = svg.append('path').attr('class', 'line blue');
					var areaPath = svg.append('path').attr('class', 'area blue');

					var x = d3.time.scale();
					var y = d3.scale.linear();

					var xAxis = d3.svg.axis()
						.scale(x)
						.ticks(d3.time.hours, 1)
						.tickFormat(d3.time.format("%H:%M"))
						.orient('bottom');

					var yAxis = d3.svg.axis()
						.scale(y)
						.ticks(7)
						.tickFormat(function(f) { return f + "ms"})
						.tickSize(-2)
						.orient('left');

					var line = d3.svg.line()
						.interpolate("basis")
						.x(function(d) { return x(d.key); })
						.y(function(d) { return y(d.values); });

					var area = d3.svg.area()
						.interpolate("basis")
						.x(function(d) { return x(d.key); })
						.y1(function(d) { return y(d.values); });

					$scope.$watch(function() {
						width = $elem.clientWidth;
						height = $elem.clientHeight;
						return width + height;
					}, resize);

					function resize(){
						var h = Math.floor(width / 2);
						svg.attr({width: width - 20, height: h});
						x.range([margin + 20, width - margin - 10]);
						y.range([h - margin, margin]);
						yAxis.tickSize(-width + 2 * margin);
						xAxisG.attr('transform', 'translate(' + [0, y.range()[0] + 0.5] + ')');
						yAxisG.attr('transform', 'translate(' + [x.range()[0], 0] + ')');
						area.y0(h - margin);
						update();
					}

					$scope.$watch('data', update);

					function update(){
						if(!$scope.data){ return };
						var data = $scope.data;

						var nestedData = d3.nest()
							.key(function(d) { return d3.time.second(d.date).getTime(); })
							.rollup(function(a) { return d3.mean(a, function(d) { return d.response_time }) })
							.entries(data);

						var xExt = d3.extent(nestedData, function(d) { return d.key; });
						x.domain(xExt);
						var yMax = d3.max(nestedData, function(d) {return Math.max(d.values); });
						y.domain([0, yMax]);

						linePath.data([nestedData]).attr("d", line);
						areaPath.data([nestedData]).attr("d", area);

						xAxisG.call(xAxis);
						yAxisG.call(yAxis);

					};
				}
			};
		})

		.directive('chartServicesVisit', function() {
			return {
				restrict: 'E',
				scope: {
					data: '='
				},
				link: function($scope, $elem, $attrs) {
					$elem = $elem[0];

					var svg = d3.select($elem).append('svg');
					var width, height;
					var margin = 20;

					var xAxisG = svg.append('g').attr('class', 'axis x');
					var yAxisG = svg.append('g').attr('class', 'axis y');
					var linePath = svg.append('path').attr('class', 'line red');

					var x = d3.time.scale();
					var y = d3.scale.linear();

					var xAxis = d3.svg.axis()
						.scale(x)
						.ticks(d3.time.hours, 1)
						.tickFormat(d3.time.format("%H:%M"))
						.orient('bottom');

					var yAxis = d3.svg.axis()
						.scale(y)
						.ticks(7)
						.orient('left');

					var line = d3.svg.line()
						.interpolate("basis")
						.x(function(d) { return x(d.key); })
						.y(function(d) { return y(d.values); });

					$scope.$watch(function() {
						width = $elem.clientWidth;
						height = $elem.clientHeight;
						return width + height;
					}, resize);

					function resize(){
						var h = Math.floor(width / 2);
						svg.attr({width: width, height: h});
						x.range([margin, width - margin]);
						y.range([h - margin, margin]);
						yAxis.tickSize(-width + 2 * margin);
						xAxisG.attr('transform', 'translate(' + [0, y.range()[0] + 0.5] + ')');
						yAxisG.attr('transform', 'translate(' + [x.range()[0], 0] + ')');
						update();
					}

					$scope.$watch('data', update);

					function update(){
						if(!$scope.data){ return };
						var data = $scope.data;

						var nestedData = d3.nest()
							.key(function(d) { return d3.time.hour(d.date).getTime(); })
							.rollup(function(a) { return d3.sum(a, function(d) { return d.visits }) })
							.entries(data);

						var xExt = d3.extent(nestedData, function(d) { return d.key; });
						x.domain(xExt);
						var yMax = d3.max(nestedData, function(d) {return Math.max(d.values); });
						y.domain([0, yMax]);
						linePath.data([nestedData]).attr("d", line);

						xAxisG.call(xAxis);
						yAxisG.call(yAxis);

					};
				}
			};
		})

		.directive('chartServicesUsage', function() {
			return {
				restrict: 'E',
				scope: {
					chartId: '@',
					chartValues: '='
				},
				template: '<div id="{{chartId}}"></div>',
				link: function ($scope, element, attrs) {
					$scope.reduce = function(values) {
						var res = [];
						values.forEach(function(value) {
							res.push({ label: value._id, value: value.uniq.length })
						});
						return res;
					}

					$scope.loadChart = function() {
						if($scope.chart) { return; }
						$scope.chart = new d3pie($scope.chartId, {
							"header": {
								"title": {
									"fontSize": 24,
									"font": "open sans"
								},
								"subtitle": {
									"color": "#999999",
									"fontSize": 12,
									"font": "open sans"
								},
								"titleSubtitlePadding": 9
							},
							"size": {
								"canvasHeight": 200,
								"canvasWidth": 350,
								"pieOuterRadius": "80%"
							},
							"data": {
								"sortOrder": "value-asc",
								"content": $scope.reduce($scope.chartValues)
							},
							"labels": {
								"outer": {
									"format": "label-value2",
									"pieDistance": 20
								},
								"inner": {
									"hideWhenLessThanPercentage": 3
								},
								"mainLabel": {
									"fontSize": 11
								},
								"percentage": {
									"color": "#ffffff",
									"decimalPlaces": 0
								},
								"value": {
									"color": "#adadad",
									"fontSize": 11
								},
								"lines": {
									"enabled": true,
									"style": "straight"
								},
								"truncation": {
									"enabled": true
								}
							}
						});
					};

					$scope.$watch('chartValues', function(nv, ov) {
						if(nv) {
							setTimeout($scope.loadChart, 100);
						}
					});
				}
			};
		})

		.directive('chartBrowsers', function() {
			return {
				restrict: 'E',
				scope: {
					chartId: '@',
					chartValues: '='
				},
				template: '<div id="{{chartId}}"></div>',
				link: function ($scope, element, attrs) {
					$scope.reduce = function(values) {
						var res = [];
						values.forEach(function(value) {
							res.push({ label: value.browser, value: value.count })
						});
						return res;
					}

					$scope.loadChart = function() {
						if($scope.chart) { return; }
						$scope.chart = new d3pie($scope.chartId, {
							"header": {
								"title": {
									"fontSize": 24,
									"font": "open sans"
								},
								"subtitle": {
									"color": "#999999",
									"fontSize": 12,
									"font": "open sans"
								},
								"titleSubtitlePadding": 9
							},
							"size": {
								"canvasHeight": 200,
								"canvasWidth": 350,
								"pieOuterRadius": "80%"
							},
							"data": {
								"sortOrder": "value-asc",
								"content": $scope.reduce($scope.chartValues)
							},
							"labels": {
								"outer": {
									"format": "label-value2",
									"pieDistance": 20
								},
								"inner": {
									"hideWhenLessThanPercentage": 3
								},
								"mainLabel": {
									"fontSize": 11
								},
								"percentage": {
									"color": "#ffffff",
									"decimalPlaces": 0
								},
								"value": {
									"color": "#adadad",
									"fontSize": 11
								},
								"lines": {
									"enabled": true,
									"style": "straight"
								},
								"truncation": {
									"enabled": true
								}
							}
						});
					};

					$scope.$watch('chartValues', function(nv, ov) {
						if(nv) {
							setTimeout($scope.loadChart, 100);
						}
					});
				}
			};
		})
})();
