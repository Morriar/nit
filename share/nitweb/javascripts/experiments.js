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
		.module('experiments', ['ngSanitize', 'model'])

		/* Rate the doc */

		.controller('ExpRateCtrl', function(Model, Experiments, $routeParams, $scope, $location, $anchorScroll) {
			$expsCtrl = this;
			this.mentity = null;
			this.currentIndex = 0;

			this.loadExperiment = function() {
				Experiments.loadGradeSession(
					function(data) {
						$expsCtrl.session = data;
						$expsCtrl.loadEntity(0);
					}, function(err) {
						$expsCtrl.error = err;
					});
			}

			this.loadEntity = function(index) {
				if(this.session.mentities.__items.length == 0) return;

				var id = this.session.mentities.__items[index].mentity_id;
				this.currentIndex = index;
				Model.loadEntity(id,
					function(data) {
						$expsCtrl.mentity = data;
						$location.hash('top');
						$anchorScroll();
					}, function(err) {
						$expsCtrl.error = err;
					});
			}

			this.hasPrevious = function() {
				if(!this.session) return false;
				return this.currentIndex > 0;
			}

			this.loadPrevious = function() {
				if(!this.hasPrevious()) return;
				this.currentIndex--;
				this.loadEntity(this.currentIndex);
			}

			this.hasNext = function() {
				if(!this.session) return false;
				return this.currentIndex < this.session.mentities.__items.length - 1;
			}

			this.loadNext = function() {
				if(!this.hasNext()) return;
				this.currentIndex++;
				this.loadEntity(this.currentIndex);
			}

			this.restart = function() {
				Experiments.clearGradeSession(
					function(data) {
						$expsCtrl.loadExperiment();
						$location.hash('top');
						$anchorScroll();
						$expsCtrl.status = {class: "warning", message: "New session started"}
					}, function(err) {
						$expsCtrl.error = err;
					});
			}

			this.save = function() {
				Experiments.saveGradeSession(this.session,
					function(data) {
						$expsCtrl.status = {class: "success", message: "Session saved"}
					}, function(err) {
						$expsCtrl.error = err;
					});
			}

			this.finish = function() {
				Experiments.finishGradeSession(this.session,
					function(data) {
						$expsCtrl.status = {class: "success", message: "Session finished"}
						$('#modal').modal();
					}, function(err) {
						$expsCtrl.error = err;
					});
			}

			this.quit = function() {
				$('#modal').modal('hide');
				$('#modal').on('hidden.bs.modal', $expsCtrl.redirect);
			}

			this.redirect = function() {
				$location.url('/experiments');
				$scope.$apply();
			}

			this.clickStar = function(rating, star) {
				if(rating.rating == star) {
					rating.rating = 0;
				} else {
					rating.rating = star;
				}
				this.save();
			}

			this.loadExperiment();
		})

		.controller('ExpRateResultsCtrl', function(Model, Experiments, $routeParams, $scope, $location, $anchorScroll) {
			$this = this;

			this.parseResults = function(results) {
				this.parseRatings(results);
				this.parseParticipants(results);
				this.parseEntities(results);
			}

			this.parseRatings = function(results) {
				this.parseDimensionsByStars(results);
			}

			this.parseDimensionsByStars = function(results) {
				var dimensions = {};
				angular.forEach(results, function(result) {
					angular.forEach(result.mentities, function(mentity) {
						angular.forEach(mentity.stars, function(star) {
							if(!dimensions[star.dimension]) {
								dimensions[star.dimension] = [];
							}
							dimensions[star.dimension].push(star);
						});
					});
				});
				this.dimensionsByStars = dimensions;
				this.parseDimensionsByValues(dimensions);
			}

			this.parseDimensionsByValues = function(dimensions) {
				var values = {};
				angular.forEach(dimensions, function(stars, dimension) {
					values[dimension] = {0: 0, 1: 0, 2: 0, 3: 0, 4: 0, 5: 0};
					angular.forEach(stars, function(star) {
						values[dimension][star.rating] += 1;
					});
				});
				var res = {};
				angular.forEach(values, function(ratings, dimension) {
					res[dimension] = [];
					angular.forEach(ratings, function(value, index) {
						res[dimension].push({
							mentity: index,
							value: value
						});
					});
				});
				this.dimensionsByValues = res;
			}

			this.parseParticipants = function(results) {
				var res = {};
				angular.forEach(results, function(result) {
					if(!res[result.user.login]) {
						res[result.user.login] = [];
					}
					res[result.user.login].push(result);
				});
				this.participants = res;
				this.participantsCount = Object.keys(res).length;
				this.parseParticipantsRatings(res);
				this.parseParticipantsTimes(res);
			}

			this.parseParticipantsRatings = function(participants) {
				var res = [];
				angular.forEach(participants, function(results, user) {
					var entry = {
						mentity: user,
						value: 0
					};
					angular.forEach(results, function(result) {
						entry.value += result.mentities.length;
					});
					res.push(entry);
				});
				this.participantsByRatings = res;
			}

			this.parseParticipantsTimes = function(participants) {
				var res = [];
				angular.forEach(participants, function(results, user) {
					var entry = {
						mentity: user,
						value: 0
					};
					angular.forEach(results, function(result) {
						entry.value += Math.round((result.finished_at - result.started_at) / 1000 / 60);
					});
					res.push(entry);
				});
				this.participantsByTimes = res;
			}

			this.parseEntities = function(results) {
				var res = {};
				angular.forEach(results, function(result) {
					angular.forEach(result.mentities, function(mentity) {
						if(!res[mentity.mentity_id]) {
							res[mentity.mentity_id] = [];
						}
						res[mentity.mentity_id].push(mentity);
					});
				});
				this.entities = res;
				this.entitiesCount = Object.keys(res).length;
				this.parseEntitiesPackages(res);
				this.parseEntitiesKinds(res);
			}

			this.parseEntitiesPackages = function(entities) {
				var mpackages = {};
				angular.forEach(entities, function(results, mentity) {
					angular.forEach(results, function(result) {
						var mpackage = result.mentity_id.split("::")[0];
						if(!mpackages[mpackage]) {
							mpackages[mpackage] = 0;
						}
						mpackages[mpackage] += 1;
					});
				});
				var res = [];
				angular.forEach(mpackages, function(value, mpackage) {
					res.push({
						mentity: mpackage,
						value: value
					});
				});
				this.packagesByRatings = res;
			}

			this.parseEntitiesKinds = function(entities) {
				var kinds = {};
				angular.forEach(entities, function(results, mentity) {
					angular.forEach(results, function(result) {
						var kind = result.mentity_kind;
						if(!kinds[kind]) {
							kinds[kind] = 0;
						}
						kinds[kind] += 1;
					});
				});
				var res = [];
				angular.forEach(kinds, function(value, kind) {
					res.push({
						mentity: kind,
						value: value
					});
				});
				this.kindsByRatings = res;
			}

			this.loadResults = function() {
				Experiments.loadGradeResults(
					function(data) {
						$this.results = data;
						$this.parseResults(data);
					}, function(err) {
						$this.error = err;
					});
			}

			this.loadResults();
		})

		.directive('gradeStars', function() {
			return {
				restrict: 'E',
				scope: {
					rating: '=',
					expsCtrl: '='
				},
				templateUrl: '/directives/experiments/stars.html'
			};
		})

		/* Order the doc */

		.controller('ExpOrderCtrl', function(Model, Experiments, $location, $anchorScroll, $scope) {

			var $ctrl = this;
			$ctrl.target = null;

			this.loadExperiment = function() {
				Experiments.loadOrderSession(
					function(data) {
						$ctrl.session = data;
						$ctrl.loadTarget($ctrl.session.mentity);
					}, function(err) {
						$ctrl.error = err;
					});
			}

			this.restart = function() {
				Experiments.clearOrderSession(
					function(data) {
						$ctrl.target = null;
						$ctrl.entity = null;
						$ctrl.loadExperiment();
						$location.hash('top');
						$anchorScroll();
						$ctrl.status = {class: "warning", message: "New session started"}
					}, function(err) {
						$ctrl.error = err;
					});
			}

			this.save = function() {
				Experiments.saveOrderSession($ctrl.session,
					function(data) {
						$ctrl.status = {class: "success", message: "Session saved"}
					}, function(err) {
						$ctrl.error = err;
					});
			}

			this.finish = function() {
				Experiments.finishOrderSession($ctrl.session,
					function(data) {
						$ctrl.status = {class: "success", message: "Session finished"}
						$('#modal').modal();
					}, function(err) {
						$ctrl.error = err;
					});
			}

			this.loadTarget = function(target) {
				Model.loadEntity(target,
					function(data) {
						$ctrl.target = data;
					}, function(err) {
						$ctrl.error = err;
					});
			}

			this.loadEntity = function(full_name) {
				Model.loadEntity(full_name,
					function(data) {
						$ctrl.entity = data;
					}, function(err) {
						$ctrl.error = err;
					});
			}

			this.move = function(item, newIndex) {
				var oldIndex = $ctrl.session.to_order.__items.indexOf(item);
				if (oldIndex !== -1) {
					if (newIndex > oldIndex) --newIndex;
					$ctrl.session.to_order.__items.splice(oldIndex, 1);
					$ctrl.session.to_order.__items.splice(newIndex, 0, item);
					$ctrl.save();
					return false;
				}
				return item;
			}

			this.quit = function() {
				$('#modal').modal('hide');
				$('#modal').on('hidden.bs.modal', $ctrl.redirect);
			}

			this.redirect = function() {
				$location.url('/experiments');
				$scope.$apply();
			}

			this.loadExperiment();
		})

		.controller('ExpOrderResultsCtrl', function(Model, Experiments, $routeParams, $scope, $location, $anchorScroll) {
			$this = this;

			this.parseResults = function(results) {
				this.parseParticipants(results);
				this.parseEntities(results);
			}

			this.parseParticipants = function(results) {
				var res = {};
				angular.forEach(results, function(result) {
					if(!res[result.user.login]) {
						res[result.user.login] = [];
					}
					res[result.user.login].push(result);
				});
				this.participants = res;
				this.participantsCount = Object.keys(res).length;
				this.parseParticipantsRatings(res);
				this.parseParticipantsTimes(res);
			}

			this.parseParticipantsRatings = function(participants) {
				var res = [];
				angular.forEach(participants, function(results, user) {
					var entry = {
						mentity: user,
						value: 0
					};
					angular.forEach(results, function(result) {
						entry.value += result.to_order.length;
					});
					res.push(entry);
				});
				this.participantsByRatings = res;
			}

			this.parseParticipantsTimes = function(participants) {
				var res = [];
				angular.forEach(participants, function(results, user) {
					var entry = {
						mentity: user,
						value: 0
					};
					angular.forEach(results, function(result) {
						entry.value += Math.round((result.finished_at - result.started_at) / 1000 / 60);
					});
					res.push(entry);
				});
				this.participantsByTimes = res;
			}

			this.parseEntities = function(results) {
				var res = {};
				angular.forEach(results, function(result) {
					angular.forEach(result.original_order, function(mentity) {
						if(!res[mentity]) {
							res[mentity] = [];
						}
						res[mentity].push(mentity);
					});
				});
				this.entities = res;
				this.entitiesCount = Object.keys(res).length;
				this.parseEntitiesPackages(res);
			}

			this.parseEntitiesPackages = function(entities) {
				var mpackages = {};
				angular.forEach(entities, function(results, mentity) {
					angular.forEach(results, function(result) {
						var mpackage = result.split("::")[0];
						if(!mpackages[mpackage]) {
							mpackages[mpackage] = 0;
						}
						mpackages[mpackage] += 1;
					});
				});
				var res = [];
				angular.forEach(mpackages, function(value, mpackage) {
					res.push({
						mentity: mpackage,
						value: value
					});
				});
				this.packagesByRatings = res;
			}

			this.loadResults = function() {
				Experiments.loadOrderResults(
					function(data) {
						$this.results = data;
						$this.parseResults(data);
					}, function(err) {
						$this.error = err;
					});
			}

			this.loadResults();
		})

		/* Group the doc */

		.controller('ExpGroupCtrl', function(Model, Experiments, $location, $anchorScroll, $scope) {

			var $ctrl = this;
			$ctrl.target = null;

			this.loadExperiment = function() {
				Experiments.loadGroupSession(
					function(data) {
						$ctrl.session = data;
						$ctrl.loadTarget($ctrl.session.mentity);
					}, function(err) {
						$ctrl.error = err;
					});
			}

			this.restart = function() {
				Experiments.clearGroupSession(
					function(data) {
						$ctrl.target = null;
						$ctrl.entity = null;
						$ctrl.loadExperiment();
						$location.hash('top');
						$anchorScroll();
						$ctrl.status = {class: "warning", message: "New session started"}
					}, function(err) {
						$ctrl.error = err;
					});
			}

			this.save = function() {
				Experiments.saveGroupSession($ctrl.session,
					function(data) {
						$ctrl.status = {class: "success", message: "Session saved"}
					}, function(err) {
						$ctrl.error = err;
					});
			}

			this.finish = function() {
				Experiments.finishGroupSession($ctrl.session,
					function(data) {
						$ctrl.status = {class: "success", message: "Session finished"}
						$('#modal').modal();
					}, function(err) {
						$ctrl.error = err;
					});
			}

			this.loadTarget = function(target) {
				Model.loadEntity(target,
					function(data) {
						$ctrl.target = data;
					}, function(err) {
						$ctrl.error = err;
					});
			}

			this.loadEntity = function(full_name) {
				Model.loadEntity(full_name,
					function(data) {
						$ctrl.entity = data;
					}, function(err) {
						$ctrl.error = err;
					});
			}

			this.move = function(item, newIndex) {
				var oldIndex = $ctrl.session.to_group.__items.indexOf(item);
				if (oldIndex !== -1) {
					if (newIndex > oldIndex) --newIndex;
					$ctrl.session.to_group.__items.splice(oldIndex, 1);
					$ctrl.session.to_group.__items.splice(newIndex, 0, item);
					$ctrl.save();
					return false;
				}
				return item;
			}

			this.deleteGroup = function(index) {
				angular.forEach($ctrl.session.groups.__items[index].__items, function(item) {
					$ctrl.session.to_group.__items.push(item);
				});
				$ctrl.session.groups.__items.splice(index, 1);
				$ctrl.save();
			}

			this.createGroup = function() {
				$ctrl.session.groups.__items.push({
					__class: "Array[String]",
					__id: -1,
					__kind: "obj",
					__items: [],
				});
				$ctrl.save();
			}

			this.quit = function() {
				$('#modal').modal('hide');
				$('#modal').on('hidden.bs.modal', $ctrl.redirect);
			}

			this.redirect = function() {
				$location.url('/experiments');
				$scope.$apply();
			}

			this.loadExperiment();
		})

		.controller('ExpGroupResultsCtrl', function(Model, Experiments, $routeParams, $scope, $location, $anchorScroll) {
			$this = this;

			this.parseResults = function(results) {
				this.parseParticipants(results);
				this.parseEntities(results);
			}

			this.parseParticipants = function(results) {
				var res = {};
				angular.forEach(results, function(result) {
					if(!res[result.user.login]) {
						res[result.user.login] = [];
					}
					res[result.user.login].push(result);
				});
				this.participants = res;
				this.participantsCount = Object.keys(res).length;
				this.parseParticipantsRatings(res);
				this.parseParticipantsTimes(res);
				this.parseParticipantsGroups(res);
			}

			this.parseParticipantsRatings = function(participants) {
				var res = [];
				angular.forEach(participants, function(results, user) {
					var entry = {
						mentity: user,
						value: 0
					};
					angular.forEach(results, function(result) {
						entry.value += result.original_group.length;
					});
					res.push(entry);
				});
				this.participantsByRatings = res;
			}

			this.parseParticipantsTimes = function(participants) {
				var res = [];
				angular.forEach(participants, function(results, user) {
					var entry = {
						mentity: user,
						value: 0
					};
					angular.forEach(results, function(result) {
						entry.value += Math.round((result.finished_at - result.started_at) / 1000 / 60);
					});
					res.push(entry);
				});
				this.participantsByTimes = res;
			}

			this.parseParticipantsGroups = function(participants) {
				var res = [];
				angular.forEach(participants, function(results, user) {
					var entry = {
						mentity: user,
						value: 0
					};
					angular.forEach(results, function(result) {
						entry.value += result.groups.length;
					});
					res.push(entry);
				});
				this.participantsByGroups = res;
			}

			this.parseEntities = function(results) {
				var res = {};
				angular.forEach(results, function(result) {
					angular.forEach(result.original_group, function(mentity) {
						if(!res[mentity]) {
							res[mentity] = [];
						}
						res[mentity].push(mentity);
					});
				});
				this.entities = res;
				this.entitiesCount = Object.keys(res).length;
				this.parseEntitiesPackages(res);
			}

			this.parseEntitiesPackages = function(entities) {
				var mpackages = {};
				angular.forEach(entities, function(results, mentity) {
					angular.forEach(results, function(result) {
						var mpackage = result.split("::")[0];
						if(!mpackages[mpackage]) {
							mpackages[mpackage] = 0;
						}
						mpackages[mpackage] += 1;
					});
				});
				var res = [];
				angular.forEach(mpackages, function(value, mpackage) {
					res.push({
						mentity: mpackage,
						value: value
					});
				});
				this.packagesByRatings = res;
			}

			this.loadResults = function() {
				Experiments.loadGroupResults(
					function(data) {
						$this.results = data;
						$this.parseResults(data);
					}, function(err) {
						$this.error = err;
					});
			}

			this.loadResults();
		})
})();
