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
	var apiUrl = '/api';

	angular
		.module('model', [])

		.factory('Games', [ '$http', function($http) {
			return {
				findAll: function(skip, limit, cb, cbErr) {
					$http.get(apiUrl + '/games?skip=' + skip + '&limit=' + limit)
						.success(cb)
						.error(cbErr);
				},

				find: function(gid, cb, cbErr) {
					$http.get(apiUrl + '/games/' + gid)
						.success(cb)
						.error(cbErr);
				},

				findPlayers: function(gid, skip, limit, cb, cbErr) {
					$http.get(apiUrl + '/games/' + gid + '/players?skip=' + skip + '&limit=' + limit)
						.success(cb)
						.error(cbErr);
				},

				findEvents: function(gid, skip, limit, cb, cbErr) {
					$http.get(apiUrl + '/games/' + gid + '/events?skip=' + skip + '&limit=' + limit)
						.success(cb)
						.error(cbErr);
				},

				findAchievements: function(gid, skip, limit, cb, cbErr) {
					$http.get(apiUrl + '/games/' + gid + '/achievements?skip=' + skip + '&limit=' + limit)
						.success(cb)
						.error(cbErr);
				},

				findStats: function(gid, cb, cbErr) {
					$http.get(apiUrl + '/games/' + gid + '/stats')
						.success(cb)
						.error(cbErr);
				}
			}
		}])

		.factory('Players', [ '$http', function($http) {
			return {
				findAll: function(skip, limit, cb, cbErr) {
					$http.get(apiUrl + '/players?skip=' + skip + '&limit=' + limit)
						.success(cb)
						.error(cbErr);
				},

				find: function(pid, cb, cbErr) {
					$http.get(apiUrl + '/players/' + pid)
						.success(cb)
						.error(cbErr);
				},

				findEvents: function(pid, skip, limit, cb, cbErr) {
					$http.get(apiUrl + '/players/' + pid + '/events?skip=' + skip + '&limit=' + limit)
						.success(cb)
						.error(cbErr);
				},

				findAchievements: function(pid, skip, limit, cb, cbErr) {
					$http.get(apiUrl + '/players/' + pid + '/achievements?skip=' + skip + '&limit=' + limit)
						.success(cb)
						.error(cbErr);
				},

				findStats: function(pid, cb, cbErr) {
					$http.get(apiUrl + '/players/' + pid + '/stats')
						.success(cb)
						.error(cbErr);
				}
			}
		}])

		.factory('Events', [ '$http', function($http) {
			return {
				findAll: function(skip, limit, cb, cbErr) {
					$http.get(apiUrl + '/events?skip=' + skip + '&limit=' + limit)
						.success(cb)
						.error(cbErr);
				},

				find: function(eid, cb, cbErr) {
					$http.get(apiUrl + '/events/' + eid)
						.success(cb)
						.error(cbErr);
				}
			}
		}])

		.factory('Achievements', [ '$http', function($http) {
			return {
				findAll: function(skip, limit, cb, cbErr) {
					$http.get(apiUrl + '/achievements?skip=' + skip + '&limit=' + limit)
						.success(cb)
						.error(cbErr);
				},

				find: function(aid, cb, cbErr) {
					$http.get(apiUrl + '/achievements/' + aid)
						.success(cb)
						.error(cbErr);
				},

				findGames: function(aid, skip, limit, cb, cbErr) {
					$http.get(apiUrl + '/achievements/' + aid + '/games?skip=' + skip + '&limit=' + limit)
						.success(cb)
						.error(cbErr);
				},

				findPlayers: function(aid, skip, limit, cb, cbErr) {
					$http.get(apiUrl + '/achievements/' + aid + '/players?skip=' + skip + '&limit=' + limit)
						.success(cb)
						.error(cbErr);
				},

				findStats: function(aid, cb, cbErr) {
					$http.get(apiUrl + '/achievements/' + aid + '/stats')
						.success(cb)
						.error(cbErr);
				}
			}
		}])

		.factory('Github', [ '$http', function($http) {
			return {
				findIssues: function(q, page, per_page, cb, cbErr) {
					q = encodeURIComponent(q);
					if(!page) { page = 1 }
					if(!per_page) { per_page = 100 }
					$http.get('https://api.github.com/search/issues?q=' + q + '&page=' + page + '&per_page=' + per_page)
						.success(cb)
						.error(cbErr);
				}
			}
		}])
})();
