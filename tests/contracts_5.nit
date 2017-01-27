# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Examples from the course INF3143 - Spécification et modélisation formelles de logiciel
# UQAM - Alexandre Terrasa

class Assurance
	# TODO inv(assert categorie == "auto" or categorie == "moto")

	var categorie: String
	var valeur: Int
	var vehicule: Vehicule

	init do
		vehicule.assurance = self
	end
end

class Conducteur
	#TODO inv(assert if assurance == null then true else permis.points > 0)
	var permis: Permis
	var assurance: nullable Assurance = null

	fun valeur_vehicule: Int
	is
		pre(assert assurance != null)
		post(assert result == assurance.vehicule.valeur)
	do
		var valeur = assurance.as(not null).vehicule.valeur
		#alt4# valeur = 0 # KO post
		return valeur
	end
end

class Permis
	# TODO inv(assert points >= 0)
	var points: Int = 6

	init
	# is
		# post(assert points == 6)
	do
		super
		#alt5# points = 0 # KO post
	end

	fun retirer_points(points: Int)
	is
		pre(assert points > 0, assert points <= self.points)
		post(assert true) # TODO points == (points)@pre - points)
	do
		self.points -= points
		#alt6# self.points = 10000 # KO post
	end
end

class Vehicule
	# TODO inv(assert if assurance == null then true else (categorie == assurance.categorie and valeur <= assurance.valeur))

	var categorie: String
	var valeur: Int
	var assurance: nullable Assurance = null
end

var p1 = new Permis
p1.retirer_points(6)
#alt1# p1.retirer_points(0) # PRE FAIL
#alt2# p1.retirer_points(6) # PRE FAIL

var c1 = new Conducteur(p1)
#alt3# print c1.valeur_vehicule

var v1 = new Vehicule("auto", 40000)
var a1 = new Assurance("auto", 50000, v1)
c1.assurance = a1
print c1.valeur_vehicule

#alt7# a1.categorie = "error" # KO inv

#alt8# c1.asssurance = null
#alt8# c1.permis.points = 0
#alt8# c1.assurance = a1 # KO inv

#alt9# p1.points = -10 # KO inv

#alt10# v1.categorie = "error"
