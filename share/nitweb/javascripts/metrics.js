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
		.module('metrics', ['model'])

		.controller('MetricsCtrl', function(Model, Metrics) {
			var $ctrl = this;

			$ctrl.kinds = ['MPackage', 'MGroup', 'MModule', 'MClass', 'MProperty'];
			$ctrl.filterKinds = { MPackage: true };
			$ctrl.target = 'all';

			this.loadModelMetrics = function() {
				Metrics.loadModelMetrics(
					function(data) {
						$ctrl.metrics = data;
					}, function(err) {
						$ctrl.error = err;
					});
			}

			this.loadDocMetrics = function() {
				this.loadPackages();
				Metrics.loadDocMetrics($ctrl.filterKinds, $ctrl.target,
					function(data) {
						$ctrl.docMetrics = data;
					}, function(err) {
						$ctrl.error = err;
					});
			}

			this.loadPackages = function() {
				Model.loadPackages(
					function(data) {
						$ctrl.mpackages = data;
					}, function(err) {
						$ctrl.error = err;
					});
			}

			this.loadModelMetrics();
		})

		.directive('barChart', function() {
			return {
				restrict: 'E',
				scope: {
					chartData: '=',
					chartLimit: '='
				},
				template: '<div />',
				link: function ($scope, element, attrs) {
					$scope.loadBarChart = function() {
						element.empty();
						var data = $scope.chartData;
						if(data.length == 0 || !data[0].values) return;

						// Sort data (descending data.value)
						data[0].values.sort(function(x, y){
							return d3.descending(x.value, y.value);
						})

						// Extract keys list
						var values = data[0].values;
						if($scope.chartLimit && $scope.chartLimit >= 0) {
							values = values.slice(0, $scope.chartLimit);
						}
						var keys = values.map(function(i) {
							return i.mentity;
						});

						//  Graph size and scale
						var margin = {top: 5, right: 10, bottom: 10, left: 100};
						var width = element.parent().width() - 30;
						var height = data.length * (keys.length * 22) + 20;

						var svg = d3.select(element[0])
							.append("svg")
								.attr("width", width)
								.attr("height", height);

						var g = svg.append("g")
							.attr("transform", "translate(" + margin.left + "," + margin.top + ")");

						// Graph axis
						var y = d3.scaleBand().rangeRound([0, height - 10]).paddingInner(0.3);
						y.domain(keys);

						g.append("g")
							.attr("class", "axis axis--y")
							.call(d3.axisLeft(y)
								.tickPadding(10)
								.tickSize(0))

						d3.selectAll("path")
							.style("display", "none");

						d3.selectAll("text")
							.filter(function(d){ return typeof(d) == "string"; })
							.style("cursor", "pointer")
							.on("click", function(d){
								document.location.href = "/doc/" + d;
							});

						// Series
						for(i in data) {
							var serie = data[i];

							var values = serie.values;
							if($scope.chartLimit && $scope.chartLimit >= 0) {
								values = values.slice(0, $scope.chartLimit);
							}

							// Bars
							var x = d3.scaleLinear().rangeRound([0, width - 250]);
							x.domain([0, d3.max(serie.values, function(d) { return d.value })]);

							g.selectAll(".bar.serie-" + i)
								.data(values)
								.enter().append("rect")
									.attr("class", "bar serie-" + i)
									.attr("x", function(d) { return 0; })
									.attr("y", function(d) { return y(d.mentity) + 22 * i; })
									.attr("width", function(d) { return x(d.value); })
									.attr("height", 20)
									.style("fill", function(d) { return serie.color; })


							// Bars labels
							g.selectAll(".label.serie-" + i)
								.data(values)
								.enter().append("text")
									.attr("class", "label serie-" + i)
									.attr("x", function(d) { return x(d.value) + 15; })
									.attr("y", function(d) { return y(d.mentity) + 22 * i + 15; })
									.attr("text-anchor", "middle")
								.text(function(d) { return d.value; });
						}

						// Add series legend
						var legend = svg.selectAll(".legend")
							.data(data)
								.enter().append("g")
								.attr("class", "legend")
								.attr("transform", function(d, i) {
									return "translate(0," + i * 20 + ")"; 
								});

						legend.append("rect")
							.attr("x", width - 18)
							.attr("width", 18)
							.attr("height", 18)
							.style("fill", function(d) { return d.color; });

						legend.append("text")
							.attr("x", width - 24)
							.attr("y", 9)
							.attr("dy", ".35em")
							.style("text-anchor", "end")
							.text(function(d) { return d.label; });
      
					};
					$scope.$watch('chartLimit', function(nv, ov) {
						if(nv) {
							setTimeout($scope.loadBarChart, 150);
						}
					});
					$scope.$watch('chartData', function(nv, ov) {
						if(nv) {
							setTimeout($scope.loadBarChart, 150);
						}
					});
				}
			};
		})

		.directive('pieChart', function() {
			return {
				restrict: 'E',
				scope: {
					chartData: '='
				},
				template: '<div />',
				link: function ($scope, element, attrs) {
					$scope.loadPieChart = function() {
						element.empty();
						new d3pie(element[0], {
							"size": {
								"canvasHeight": 200,
								"canvasWidth": 350,
								"pieOuterRadius": "80%"
							},
							"data": {
								"sortOrder": "value-asc",
								"content": $scope.chartData
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

					$scope.$watch('chartData', function(nv, ov) {
						if(nv) {
							setTimeout($scope.loadPieChart, 100);
						}
					});
				}
			};
		})
})();
