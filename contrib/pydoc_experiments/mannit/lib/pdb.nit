# A Python debugger.
module pdb

import cmd
import bdb

redef class Sys

end

class Pdb
    super Cmd
    super Bdb

    fun do_enable(arg: Object) is abstract

    fun forget is abstract

    fun help_cont is abstract

    fun do_args(arg: Object) is abstract

    fun help_pp is abstract

    fun help_disable is abstract

    fun do_next(arg: Object) is abstract

    fun help_help is abstract

    fun help_return is abstract

    init do end

    fun help_break is abstract

    fun do_step(arg: Object) is abstract

    # Check whether specified line seems to be executable.
    # Return `lineno` if it is, 0 if not (e.g. a docstring, comment, blank
    # line or EOF). Warning: testing is not comprehensive.
    fun checkline(lineno, filename: Object) is abstract

    fun do_up(arg: Object) is abstract

    # This method is called when there is the remote possibility
    # that we ever need to stop in this function.
    redef fun user_call(frame, argument_list) is abstract

    fun help_eof is abstract

    # Call every command that was set for the current active breakpoint
    # (if there is one).
    # Returns True if the normal interaction function must be called,
    # False otherwise.
    fun bp_commands(frame: Object) is abstract

    # arg is bp number followed by ignore count.
    fun do_ignore(arg: Object) is abstract

    fun do_until(arg: Object) is abstract

    redef fun default(line) is abstract

    fun help_pdb is abstract

    fun help_unalias is abstract

    fun do_where(arg: Object) is abstract

    fun do_list(arg: Object) is abstract

    # List available commands with "help" or detailed help with "help cmd".
    redef fun do_help(arg) is abstract

    # Handles one command line during command list definition.
    fun handle_command_def(line: Object) is abstract

    # Interpret the argument as though it had been typed in response
    # to the prompt.
    # Checks whether this line is typed at the normal prompt or in
    # a breakpoint command list definition.
    redef fun onecmd(line) is abstract

    # Produce a reasonable default.
    fun defaultfile is abstract

    fun do_pp(arg: Object) is abstract

    fun help_clear is abstract

    fun do_break(temporary, arg: Object) is abstract

    fun do_return(arg: Object) is abstract

    private fun private_runscript(filename: Object) is abstract

    fun do_quit(arg: Object) is abstract

    fun help_enable is abstract

    fun help_step is abstract

    fun do_tbreak(arg: Object) is abstract

    fun do_unalias(arg: Object) is abstract

    fun help_unt is abstract

    fun help_condition is abstract

    fun interaction(frame, traceback: Object) is abstract

    fun execrclines is abstract

    fun do_retval(arg: Object) is abstract

    fun do_condition(arg: Object) is abstract

    fun help_commands is abstract

    fun do_whatis(arg: Object) is abstract

    fun help_tbreak is abstract

    fun help_cl is abstract

    fun print_stack_trace is abstract

    fun help_args is abstract

    # Handle alias expansion and ';;' separator.
    redef fun precmd(line) is abstract

    fun help_r is abstract

    fun help_s is abstract

    fun help_p is abstract

    fun help_q is abstract

    fun help_w is abstract

    fun help_u is abstract

    fun do_jump(arg: Object) is abstract

    # Helper function for break/clear parsing -- may be overridden.
    # lookupmodule() translates (possibly incomplete) file or module name
    # into an absolute file name.
    fun lookupmodule(filename: Object) is abstract

    fun do_eof(arg: Object) is abstract

    fun help_where is abstract

    fun help_b is abstract

    fun help_c is abstract

    fun help_a is abstract

    fun do_disable(arg: Object) is abstract

    fun help_d is abstract

    # This function is called if an exception occurs,
    # but only if we are to stop at or just below this level.
    redef fun user_exception(exc_info, frame) is abstract

    fun help_j is abstract

    fun help_jump is abstract

    fun help_h is abstract

    fun help_n is abstract

    fun help_l is abstract

    # Defines a list of commands associated to a breakpoint.
    # Those commands will be executed whenever the breakpoint causes
    # the program to stop execution.
    fun do_commands(arg: Object) is abstract

    # Three possibilities, tried in this order:
    # clear -> clear all breaks, ask for confirmation
    # clear file:lineno -> clear all breaks at file:lineno
    # clear bpno bpno ... -> clear breakpoints by number
    redef fun do_clear(arg) is abstract

    redef fun reset is abstract

    fun print_stack_entry(prompt_prefix, frame_lineno: Object) is abstract

    fun help_ignore is abstract

    fun setup(t, f: Object) is abstract

    fun lineinfo(identifier: Object) is abstract

    # This function is called when a return trap is set here.
    redef fun user_return(frame, return_value) is abstract

    fun do_p(arg: Object) is abstract

    fun help_run is abstract

    # This function is called when we stop or break at this line.
    redef fun user_line(frame) is abstract

    fun help_continue is abstract

    fun do_alias(arg: Object) is abstract

    fun help_exec is abstract

    fun help_quit is abstract

    fun do_down(arg: Object) is abstract

    fun help_until is abstract

    fun help_debug is abstract

    fun help_list is abstract

    fun do_debug(arg: Object) is abstract

    fun do_continue(arg: Object) is abstract

    fun help_next is abstract

    fun help_down is abstract

    # Restart program by raising an exception to be caught in the main
    # debugger loop.  If arguments were given, set them in sys.argv.
    fun do_run(arg: Object) is abstract

    fun help_up is abstract

    fun help_whatis is abstract

    # Custom displayhook for the exec in default(), which prevents
    # assignment of the _ variable in the builtins.
    fun displayhook(obj: Object) is abstract

    fun help_alias is abstract

    private fun private_getval(arg: Object) is abstract

end

# Causes a debugger to be restarted for the debugged python program.
class Restart
    super Exception

end

class Repr

    fun repr_instance(x, level: Object) is abstract

    fun repr_array(x, level: Object) is abstract

    private fun private_repr_iterable(right, level, trail, maxiter, x, left: Object) is abstract

    fun repr_tuple(x, level: Object) is abstract

    fun repr_list(x, level: Object) is abstract

    fun repr_long(x, level: Object) is abstract

    fun repr(x: Object) is abstract

    fun repr1(x, level: Object) is abstract

    init do end

    fun repr_set(x, level: Object) is abstract

    fun repr_str(x, level: Object) is abstract

    fun repr_deque(x, level: Object) is abstract

    fun repr_frozenset(x, level: Object) is abstract

    fun repr_dict(x, level: Object) is abstract

end

