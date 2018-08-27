# [[ai]] - [[ini-desc: ai]]

This library provides some frameworks for basic algorithms used for artificial intelligence.
It offers simple generic classes to extends.

[[toc]]

## `backtrack` 

[[doc: ai::backtrack]]

### [[sign: ai::BacktrackProblem]]

[[doc: ai::BacktrackProblem]]

Useful features:

[[features: ai | mentities: ai::BacktrackProblem::initial_state;ai::BacktrackProblem::solve;ai::BacktrackProblem::is_goal;ai::BacktrackProblem::backtrack;ai::BacktrackProblem::apply_action;ai::BacktrackProblem::actions]]

### [[sign: ai::BacktrackSolver]]

[[doc: ai::BacktrackSolver]]

Useful features:

[[features: ai | mentities: ai::BacktrackSolver::state;ai::BacktrackSolver::node;ai::BacktrackSolver::steps;ai::BacktrackSolver::is_running;ai::BacktrackSolver::problem;ai::BacktrackSolver::steps_limit;ai::BacktrackSolver::run_steps;ai::BacktrackSolver::run;ai::BacktrackSolver::steps_limit=]]

### [[sign: ai::BacktrackNode]]

[[doc: ai::BacktrackNode]]

## `search`

### [[sign: ai::SearchProblem]]

[[doc: ai::SearchProblem]]

Useful features:

[[features: ai | mentities: ai::SearchProblem::initial_state;ai::SearchProblem::initial_node;ai::SearchProblem::depth_first;ai::SearchProblem::breadth_first;ai::SearchProblem::is_goal;ai::SearchProblem::epsilon;ai::SearchProblem::actions;ai::SearchProblem::run_configs;ai::SearchProblem::cost;ai::SearchProblem::astar;ai::SearchProblem::heuristic;ai::SearchProblem::make_memory;ai::SearchProblem::apply_action]]

### [[sign: ai::SearchSolver]]

[[doc: ai::SearchSolver]]

Useful features:

[[features: ai | mentities: ai::SearchSolver::steps;ai::SearchSolver::node;ai::SearchSolver::nodes;ai::SearchSolver::neighbors;ai::SearchSolver::is_running;ai::SearchSolver::problem;ai::SearchSolver::memorized;ai::SearchSolver::iterative_deepening;ai::SearchSolver::branching_factor;ai::SearchSolver::solution;ai::SearchSolver::nearest_solution;ai::SearchSolver::steps_limit;ai::SearchSolver::memorize;ai::SearchSolver::run;ai::SearchSolver::run_steps;ai::SearchSolver::depth_limit;ai::SearchSolver::depth_limit_reached;ai::SearchSolver::steps_limit=;ai::SearchSolver::run_config;ai::SearchSolver::memorize=;ai::SearchSolver::depth_limit=;ai::SearchSolver::memorize_late;ai::SearchSolver::revisits;ai::SearchSolver::memorize_late=;ai::SearchSolver::do_revisit;ai::SearchSolver::do_revisit=]]

### [[sign: ai::SearchNode]]

[[doc: ai::SearchNode]]

## Contributing

This project is versioned with git.
We accept pull requests on [[ini-git: ai | contrib]].

## Authors

This project is maintained by [[ini-maintainer: ai]].

## License

This project is licensed under the [[ini-license: ai]]
license.


