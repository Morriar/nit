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
		.module('readme', ['ngSanitize'])

		.config(function($stateProvider, $locationProvider) {
			$stateProvider
				.state('readme', {
					url: '/readme',
					templateUrl: 'views/docdown.html',
					controller: 'DocdownCtrl',
					controllerAs: 'vm'
				})
		})

		.factory('DocDown', [ '$http', function($http) {
			return {
				loadDocs: function(cb, cbErr) {
					$http.get('/api/readme/docs')
						.success(cb)
						.error(cbErr);
				},
				renderHtml: function(md, target, cb, cbErr) {
					$http.post('/api/readme?format=html' + '&target=' + target, md)
						.success(cb)
						.error(cbErr);
				},
				renderMd: function(md, target, cb, cbErr) {
					$http.post('/api/readme?format=md' + '&target=' + target, md)
						.success(cb)
						.error(cbErr);
				},
				suggest: function(target, md, line, column, cb, cbErr) {
					$http.post('/api/readme/suggest?line=' + line + '&column=' + column + '&target=' + target, md)
						.success(cb)
						.error(cbErr);
				},
				dismiss: function(card, cb, cbErr) {
					$http.post('/api/readme/dismiss', card.id)
						.success(cb)
						.error(cbErr);
				},
				clearSession: function(cb, cbErr) {
					$http.post('/api/readme/clear')
						.success(cb)
						.error(cbErr);
				}
			}
		}])

		.controller('DocdownCtrl', function($scope, $sce, $location, DocDown) {
			var vm = this;

			this.initEditor = function(div) {
				vm.editor = CodeMirror(div, {
					lineNumbers: true,
					matchBrackets: true,
					viewportMargin: Infinity
				});
				vm.editor.on('cursorActivity', function(CodeMirror) {
					$scope.$emit('doc-change', CodeMirror.doc.getValue(),
						CodeMirror.doc.getCursor());
				});
				var buffer = CodeMirror.Doc(vm.markdown, 'markdown');
				vm.editor.swapDoc(buffer);
				vm.editor.focus();
			}

			this.loadDocs = function() {
				DocDown.loadDocs(
					function(data) { vm.session = data },
					function(err) { vm.error = err });
			}

			this.loadDoc = function(doc) {
				vm.target = doc.target_name;
				vm.markdown = doc.md;
				var buffer = CodeMirror.Doc(doc.md, 'markdown');
				vm.editor.swapDoc(buffer);
			}

			this.changeTarget = function() {
				vm.updateSuggestions(vm.target, vm.markdown, 1, 1)
			}

			this.renderHtml = function() {
				DocDown.renderHtml(vm.markdown, vm.target,
					function(data) {
						vm.html = $sce.trustAsHtml(data);
						$('#renderModal').modal();
					}, function(err) {
						vm.error = err;
					});
			}

			this.renderMd = function() {
				DocDown.renderMd(vm.markdown, vm.target,
					function(data) {
						vm.html = $sce.trustAsHtml(data);
						$('#renderModal').modal();
					}, function(err) {
						vm.error = err;
					});
			}

			this.clearSession = function() {
				DocDown.clearSession(
					function(data) {
						var pos = vm.editor.doc.getCursor();
						vm.updateSuggestions(vm.target, vm.markdown, pos.line + 1, pos.ch + 1);
					}, function(err) {
						vm.error = err;
					});
			}

			this.updateSuggestions = function(target, markdown, linePos, lineChar) {
				DocDown.suggest(target, markdown, linePos, lineChar,
					function(data) {
						vm.summary = data.summary;
						vm.suggestions = data.suggestions;
						vm.debug = data.debug;
					}, function(err) {
						vm.error = err;
					});
			};

			this.jumpSection = function(section) {
				vm.editor.focus();
				var coords = vm.editor.charCoords(
					{line: section.line - 1, ch: 0}, "local").top;
				vm.editor.scrollTo(0, coords);
			};

			$scope.$on('init-editor', function(e, div) {
				vm.initEditor(div);
			})

			$scope.$on('doc-change', function(e, data, pos) {
				vm.markdown = data;
				vm.updateSuggestions(vm.target, data, pos.line + 1, pos.ch + 1);
			})

			$scope.$on('insert-card', function(e, card) {
				var cursor = vm.editor.doc.getCursor();
				vm.editor.doc.replaceRange(card.command_string, cursor);
			})

			$scope.$on('insert-content', function(e, content) {
				var cursor = vm.editor.doc.getCursor();
				vm.editor.doc.replaceRange(content, cursor);
				vm.editor.focus();
				//vm.updateSuggestions(vm.target, vm.markdown, 1, 1);
			})

			$scope.$on('edit-card', function(e, card, index) {
				vm.config_card = card;
				vm.config_index = index;
				$('#editModal').modal();
			})

			$scope.$on('dismiss-card', function(e, index, card) {
				DocDown.dismiss(card,
					function(data) {
						var pos = vm.editor.doc.getCursor();
						vm.updateSuggestions(vm.target, vm.markdown, pos.line + 1, pos.ch + 1);
					}, function(err) {
						vm.error = err;
					});
				//vm.suggestions.splice(index, 1);
			})

			$scope.$on('update-target', function(e, target) {
				vm.target = target;
				vm.changeTarget();
			})

			//TODO remove
			vm.target = 'ai';
			vm.markdown = '';
			/*if($location.search().snippet) {
				vm.markdown = atob($location.search().snippet);
			}*/

			this.loadDocs();
			this.updateSuggestions(vm.target, vm.markdown, 1, 1);
		})

		/* Directives */

		.directive('docEditor', function () {
			return {
				scope: {},
				link: function($scope, $el, $attr) {
					$scope.$emit('init-editor', angular.element('#editor')[0]);
				},
				restrict: 'E',
				replace: true,
				template: '<div id="editor" />'
			};
		})

		.directive('cardTip', function() {
			return {
				restrict: 'E',
				scope: {},
				bindToController: {
					card: '=',
					index: '='
				},
				controller: function($scope, $sce) {
					var vm = this;
					//vm.card.html = vm.card.html.replace('<p>', '');
					vm.card.description = $sce.trustAsHtml(vm.card.description);

					this.dismissCard = function() {
						$scope.$emit('dismiss-card', vm.index, vm.card);
					}
				},
				controllerAs: 'vm',
				replace: true,
				templateUrl: '/directives/cards/card-tip.html'
			};
		})

		.directive('cardScaffolding', function() {
			return {
				restrict: 'E',
				scope: {},
				bindToController: {
					card: '=',
					index: '='
				},
				controller: function($scope, $sce) {
					var vm = this;
					vm.mode = 'html';

					this.switchCard = function() {
						if(vm.mode == 'html') {
							vm.mode = 'md';
						} else {
							vm.mode = 'html';
						}
					}

					this.insertCard = function() {
						$scope.$emit('insert-content', vm.card.markdown);
						//$scope.$emit('dismiss-card', vm.index, vm.card);
					}

					this.dismissCard = function() {
						$scope.$emit('dismiss-card', vm.index, vm.card);
					}

					this.editCard = function() {
						$scope.$emit('edit-card', vm.card, vm.index);
					}
				},
				controllerAs: 'vm',
				replace: true,
				templateUrl: '/directives/cards/card-scaffolding.html'
			};
		})

		.directive('cardFreedoc', function() {
			return {
				restrict: 'E',
				scope: {},
				bindToController: {
					card: '=',
					index: '='
				},
				controller: function($scope, $sce) {
					var vm = this;
					vm.mode = 'html';
					// TODO beurk
					vm.card.html = vm.card.html.replace('<p>', '');
					vm.card.html = $sce.trustAsHtml(vm.card.html);

					this.switchCard = function() {
						if(vm.mode == 'html') {
							vm.mode = 'md';
						} else {
							vm.mode = 'html';
						}
					}

					this.insertCard = function() {
						$scope.$emit('insert-content', vm.card.markdown);
						//$scope.$emit('dismiss-card', vm.index, vm.card);
					}

					this.dismissCard = function() {
						$scope.$emit('dismiss-card', vm.index, vm.card);
					}

					this.editCard = function() {
						$scope.$emit('edit-card', vm.card, vm.index);
					}
				},
				controllerAs: 'vm',
				replace: true,
				templateUrl: '/directives/cards/card-freedoc.html'
			};
		})

		.directive('configCard', function() {
			return {
				restrict: 'E',
				scope: {},
				bindToController: {
					card: '=',
					index: '=',
				},
				controller: function($scope, $sce) {
					var vm = this;

					this.insertCard = function() {
						$('#editModal').modal('hide');
						$scope.$emit('insert-content', vm.card.markdown);
						$scope.$emit('dismiss-card', vm.index);
					}
				},
				controllerAs: 'vm',
				replace: true,
				templateUrl: '/directives/cards/card-config.html'
			};
		})
})();
