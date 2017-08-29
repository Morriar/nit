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
	angular
		.module('messages', [])

		/* Router */

		.config(function($stateProvider, $locationProvider) {
			$stateProvider
				.state('messages', {
					url: '/messages?group_by',
					templateUrl: 'views/messages.html',
					resolve: {
						messages: function(Messages, $q, $stateParams, $state) {
							var d = $q.defer();
							var groupBy = $stateParams.group_by;
							Messages.loadMessages(groupBy, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						}
					},
					controller: function(messages) {console.log(messages);
						this.messages = messages;
					},
					controllerAs: 'vm',
				})
				.state('doc.entity.messages', {
					url: '/messages',
					templateUrl: 'views/doc/messages.html',
					resolve: {
						messages: function(Messages, $q, $stateParams, $state) {
							var d = $q.defer();
							Messages.loadEntityMessages($stateParams.id, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						}
					},
					controller: function(mentity, messages) {
						this.mentity = mentity;
						this.messages = messages;
					},
					controllerAs: 'vm',
				})
		})

		/* Model */

		.factory('Messages', [ '$http', function($http) {
			return {
				loadMessages: function(groupBy, cb, cbErr) {
					$http.get('/api/messages?group_by=' + groupBy)
						.success(cb)
						.error(cbErr);
				},
				loadEntityMessages: function(id, cb, cbErr) {
					$http.get('/api/messages/' + id)
						.success(cb)
						.error(cbErr);
				}
			};
		}])

		/* Directives */

		.directive('compilerMessage', function() {
			return {
				restrict: 'E',
				replace: true,
				scope: {},
				bindToController: {
					message: '='
				},
				controller: function() {},
				controllerAs: 'vm',
				templateUrl: '/directives/compiler-message.html'
			};
		})
})();
