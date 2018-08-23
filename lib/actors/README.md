# `actors` - Nit Actor Model

Example from `actors::agent_simulation`:

~~~
# a "Framework" to make Multi-Agent Simulations in Nit
module agent_simulation is example, no_warning("missing-doc")

import actors

# Master of the simulation, it initiates the steps and waits for them to terminate
class ClockAgent
	actor

	# Number of steps to do in the simulation
	var nb_steps: Int

	# List of Agents in the simulation
	var agents: Array[Agent]

	# Number of agents that finished their step
	var nb_finished = 0

	fun do_step do
		for a in agents do a.async.do_step
		nb_steps -= 1
	end

	fun finished_step do
		nb_finished += 1
		if nb_finished == agents.length then
			nb_finished = 0
			if nb_steps != 0 then async.do_step
		end
	end
end

class Agent
	actor

	# Doing a step in the simulation
	fun do_step do
	end

	fun end_step do clock_agent.async.finished_step

end

redef class Sys
	var clock_agent: ClockAgent is noautoinit,writable
end
~~~

## Features

* `AMessagebar`
* `AMessagefoo`
* `Actor` - Abstraction of an actor
* `ActorA` - ###################### Actor classes #########################
* `ActorAgent`
* `ActorClockAgent` - ###################### Actor classes #########################
* `ActorCreature` - ###################### Actor classes #########################
* `ActorFannkuchRedux` - ###################### Actor classes #########################
* `ActorThreadRing` - ###################### Actor classes #########################
* `ActorWorker` - ###################### Actor classes #########################
* `AgentMessagecount`
* `AgentMessagedo_step`
* `AgentMessageend_step`
* `AgentMessagegreet`
* `AgentMessagegreet_back`
* `AgentMessageothers` - ###################### Redef classes #########################
* `ClockAgentMessageagents`
* `ClockAgentMessagedo_step`
* `ClockAgentMessagefinished_step`
* `ClockAgentMessagenb_finished`
* `ClockAgentMessagenb_steps`
* `CreatureMessagecolor`
* `CreatureMessagecount`
* `CreatureMessageid`
* `CreatureMessageplace`
* `CreatureMessagerun`
* `CreatureMessagesamecount`
* `CreatureMessageto_string`
* `FannkuchReduxMessagecount`
* `FannkuchReduxMessagecount_flips`
* `FannkuchReduxMessagefirst_permutation`
* `FannkuchReduxMessagenext_permutation`
* `FannkuchReduxMessagep`
* `FannkuchReduxMessagepp`
* `FannkuchReduxMessageprint_p`
* `FannkuchReduxMessagerun`
* `FannkuchReduxMessagerun_task`
* `Future` - The promise of a value which will be set asynchronously
* `Mailbox` - A Blocking queue implemented from a `ConcurrentList`
* `Message` - A Message received by a Mailbox
* `MessageA` - ###################### Messages classes ######################
* `MessageAgent`
* `MessageClockAgent` - ###################### Messages classes ######################
* `MessageCreature` - ###################### Messages classes ######################
* `MessageFannkuchRedux` - ###################### Messages classes ######################
* `MessageThreadRing` - ###################### Messages classes ######################
* `MessageWorker` - ###################### Messages classes ######################
* `Proxy` - Abstraction of proxies for threaded actors
* `ProxyA`
* `ProxyAgent`
* `ProxyClockAgent`
* `ProxyCreature`
* `ProxyFannkuchRedux`
* `ProxyThreadRing`
* `ProxyWorker`
* `ShutDownMessage` - A Message to Rule them all... properly shutdown an Actor
* `SynchronizedCounter` - A counter on which threads can wait until its value is 0
* `ThreadRingMessageid`
* `ThreadRingMessagenext`
* `ThreadRingMessagesend_token`
* `WorkerMessageget_byte`
* `WorkerMessageput_line`
* `WorkerMessagework`

## Authors

This project is maintained by **Romain Chanoir <mailto:romain.chanoir@viacesi.fr>**.
