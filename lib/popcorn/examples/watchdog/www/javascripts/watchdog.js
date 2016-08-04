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
	angular.module('watchdog', ['ngRoute', 'angular-loading-bar', 'auth', 'admin', 'sites', 'user'])

	.config(['cfpLoadingBarProvider', function(cfpLoadingBarProvider) {
		cfpLoadingBarProvider.includeSpinner = false;
	}])

	.config(function($routeProvider, $locationProvider) {
		$routeProvider
			.when('/', {
				templateUrl: 'views/index.html'
			})
			// Auth
			.when('/signin', {
				templateUrl: 'views/signin.html',
				controller: 'AuthCtrl',
				controllerAs: 'authCtrl'
			})
			.when('/login', {
				templateUrl: 'views/login.html',
				controller: 'AuthCtrl',
				controllerAs: 'authCtrl'
			})
			.when('/logout', {
				template: '<div ng-init="authCtrl.logoutUser()"></div>',
				controller: 'AuthCtrl',
				controllerAs: 'authCtrl'
			})
			// User
			.when('/user/', {
				templateUrl: 'views/user/index.html',
				controller: 'UserCtrl',
				controllerAs: 'userCtrl'
			})
			.when('/user/sites', {
				templateUrl: 'views/user/sites.html',
				controller: 'SitesCtrl',
				controllerAs: 'sitesCtrl'
			})
			.when('/user/sites/:id', {
				templateUrl: 'views/user/site.html',
				controller: 'SiteCtrl',
				controllerAs: 'siteCtrl'
			})
			.when('/user/profile', {
				templateUrl: 'views/user/profile.html',
				controller: 'AuthCtrl',
				controllerAs: 'authCtrl'
			})
			// Admin
			.when('/admin/users', {
				templateUrl: 'views/admin/users.html',
				controller: 'AdminUsersCtrl',
				controllerAs: 'usersCtrl'
			})
			.when('/users/:login', {
				templateUrl: 'views/admin/user.html',
				controller: 'AdminUserCtrl',
				controllerAs: 'userCtrl'
			})
			.otherwise({
				redirectTo: '/'
			});
		$locationProvider.html5Mode(true);
	});
})();
