# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2016 Alexandre Terrasa <alexandre@moz-code.org>.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

module api

import api_games
import api_players
import api_events
import api_achievements
import api_listener

# Router for the Nitrpg API
class NitrpgAPI
	super APIRouter

	init do
		use("/games", new APIGameRouter(app))
		use("/players", new APIPlayerRouter(app))
		use("/events", new APIEventRouter(app))
		use("/achievements", new APIAchievementRouter(app))
		use("/listener", new APIListener(app))
	end
end
