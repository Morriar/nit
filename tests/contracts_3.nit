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

class Compte
	# TODO inv(solde >= 0)

	var solde: Int = 0

	fun crediter(montant: Int)
	is
		pre(assert montant > 0)
		post(assert solde == montant + (solde)@pre) # TODO assert solde = (solde)@pre + montant
	do
		solde += montant
		#alt4# solde = 100000000
	end

	fun debiter(montant: Int)
	is
		pre(assert montant > 0 and montant <= solde)
		post(assert solde == montant - (solde)@pre) # TODO assert solde = (solde)@pre - montant
	do solde -= montant
end

class SubCompte
	super Compte

	redef fun debiter(montant) do
		solde += montant
	end
end

# TODO Check inv

var c1 = new Compte
c1.crediter(10)
#alt1#c1.crediter(0) # FAIL pre

c1.debiter(10)
#alt2#c1.debiter(10) # FAIL pre
#alt3#c1.debiter(-10) # FAIL pre

#alt5#
var c2 = new SubCompte
#alt5#
c2.crediter(10)
#alt5#
c2.debiter(1)
