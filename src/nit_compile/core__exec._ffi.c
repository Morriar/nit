/*
	Extern implementation of Nit module exec
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "core__exec._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#line 19 "/home/morriar/dev/projects/nit/lib/core/exec.nit"


	#include <stdlib.h>
	#include <string.h>
	#include <errno.h>
	#include <stdio.h>
	#include <unistd.h>
	#include <signal.h>
#ifndef _WIN32
	#include <sys/wait.h>
#endif
int exec___NativeProcess_is_finished___impl(  se_exec_data_t*  self )
{
#line 364 "/home/morriar/dev/projects/nit/lib/core/exec.nit"


#ifdef _WIN32
		// FIXME use a higher level abstraction to support WIN32
		return 0;
#else
		int result = (int)0;
		int status;
		if (self->running) {
			int id = waitpid(self->id, &status, WNOHANG);
			if (id != 0) {
				/* child is finished */
				result = (int)(id == self->id);
				self->status = WEXITSTATUS(status);
				self->running = 0;
			}
		}
		else{
			result = (int)1;
		}
		return result;
#endif
	}
void exec___NativeProcess_wait___impl(  se_exec_data_t*  self )
{
#line 387 "/home/morriar/dev/projects/nit/lib/core/exec.nit"


#ifndef _WIN32
		// FIXME use a higher level abstraction to support WIN32
		int status;
		if (self->running) {
			waitpid(self->id, &status, 0);
			self->status = WEXITSTATUS(status);
			self->running = 0;
		}
#endif
	}
long exec___NativeProcess_status___impl(  se_exec_data_t*  self )
{
#line 359 "/home/morriar/dev/projects/nit/lib/core/exec.nit"

 return self->status; }
 se_exec_data_t*  exec___Process_basic_exec_execute___impl( void* self, char* prog, char* args, long argc, long pipeflag )
{
#line 116 "/home/morriar/dev/projects/nit/lib/core/exec.nit"


#ifdef _WIN32
		// FIXME use a higher level abstraction to support WIN32
		return -1;
#else
		se_exec_data_t* result = NULL;
		int id;
		int in_fd[2];
		int out_fd[2];
		int err_fd[2];
		if (pipeflag & 1) {
			int res = pipe(in_fd);
			if ( res == -1 ) {
				return NULL;
			}
		}
		if (pipeflag & 2) {
			int res = pipe(out_fd);
			if ( res == -1 ) {
				return NULL;
			}
		}
		if (pipeflag & 4) {
			int res = pipe(err_fd);
			if ( res == -1 ) {
				return NULL;
			}
		}

		id = fork();
		if (id == 0)
			{ /* child */
			char **arg = malloc(sizeof(char*) * (argc+1));
			char *c = args;
			int i;

			/* Prepare args */
			for(i=0; i<argc; i++)
			{
				arg[i] = c;
				c += strlen(c) + 1;
			}
			arg[argc] = NULL;

			/* Connect pipe */
			if (pipeflag & 1)
			{
				close(0);
				dup2(in_fd[0], 0);
				close(in_fd[0]);
				close(in_fd[1]);
			}
			if (pipeflag & 2)
			{
				close(1);
				dup2(out_fd[1], 1);
				close(out_fd[0]);
				close(out_fd[1]);
			}
			if (pipeflag & 4)
			{
				close(2);
				dup2(err_fd[1], 2);
				close(err_fd[0]);
				close(err_fd[1]);
			}

			/* calls */
			execvp(prog, arg);
			_exit(127);
		}
		else if (id > 0)
			{ /* father */
			result = (se_exec_data_t*)malloc(sizeof(se_exec_data_t));
			result->id = id;
			result->running = 1;
			if (pipeflag & 1)
			{
				result->in_fd = in_fd[1];
				close(in_fd[0]);
			} else
				result->in_fd = -1;

			if (pipeflag & 2)
			{
				result->out_fd = out_fd[0];
				close(out_fd[1]);
			} else
				result->out_fd = -1;

			if (pipeflag & 4)
			{
				result->err_fd = err_fd[0];
				close(err_fd[1]);
			} else
				result->err_fd = -1;
		}

		return result;
#endif
	}
long exec___NativeProcess_out_fd___impl(  se_exec_data_t*  self )
{
#line 361 "/home/morriar/dev/projects/nit/lib/core/exec.nit"

 return self->out_fd; }
long exec___CString_system___impl( char* self )
{
#line 344 "/home/morriar/dev/projects/nit/lib/core/exec.nit"


		int status = system(self);
#ifndef _WIN32
		if (WIFSIGNALED(status) && WTERMSIG(status) == SIGINT) {
			// system exited on SIGINT: in my opinion the user wants the main to be discontinued
			kill(getpid(), SIGINT);
		}
#endif
		return status;
	}
