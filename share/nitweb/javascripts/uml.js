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
	angular.module('uml', [])

	/* Router */

	.config(function($stateProvider, $locationProvider) {
		$stateProvider
			.state('uml', {
				url: '/uml',
				controller: 'UMLCtrl',
				controllerAs: 'vm',
				templateUrl: 'views/uml/index.html',
				resolve: {
					options: function(UML, $q, $state) {
						var d = $q.defer();
						UML.getOptions(d.resolve,
							function() {
								$state.go('404', null, { location: false })
							});
						return d.promise;
					}
				}
			})
	})

	/* Factories */

	.factory('UML', [ '$http', function($http) {
		return {
			getOptions: function(cb, cbErr) {
				$http.get('/api/uml')
					.success(cb)
					.error(cbErr);
			},
			render: function(options, cb, cbErr) {
				$http.post('/api/uml', options)
					.success(cb)
					.error(cbErr);
			},
		};
	}])

	/* Controllers */

	.controller('UMLCtrl', function(UML, options, $sce, $location) {
		var vm = this;
		vm.options = options;

		vm.render = function() {
			vm.shareUrl = $location.protocol()+ '://' + $location.host() + ':' +
					$location.port() + $location.path() + '?snippet=' +
					encodeURIComponent(btoa(JSON.stringify(vm.options)));
			UML.render(vm.options, function(res) {
				vm.output = $sce.trustAsHtml(res);
			}, function(error) {
				console.log(error);
			});
		}

		if($location.search().snippet) {
			vm.options = JSON.parse(atob($location.search().snippet));
		}
		vm.edit = false;
		if($location.search().edit) {
			vm.edit = Boolean($location.search().edit);
		}
	
		vm.render();
	})

})();
