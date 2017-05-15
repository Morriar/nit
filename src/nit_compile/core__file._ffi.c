/*
	Extern implementation of Nit module file
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "core__file._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#line 36 "/home/morriar/dev/projects/nit/lib/core/file.nit"


#ifdef _WIN32
	#include <windows.h>
#endif
long file___NativeFile_io_close___impl(  FILE*  self )
{
#line 1518 "/home/morriar/dev/projects/nit/lib/core/file.nit"

 return fclose(self); }
long file___NativeFile_set_buffering_type___impl(  FILE*  self, long buf_length, long mode )
{
#line 1538 "/home/morriar/dev/projects/nit/lib/core/file.nit"


		return setvbuf(self, NULL, (int)mode, buf_length);
	}
long file___NativeFile_io_read___impl(  FILE*  self, char* buf, long len )
{
#line 1505 "/home/morriar/dev/projects/nit/lib/core/file.nit"


		return fread(buf, 1, len, self);
	}
int file___NativeFile_ferror___impl(  FILE*  self )
{
#line 1530 "/home/morriar/dev/projects/nit/lib/core/file.nit"

 return ferror(self); }
 FILE*  file___Int_fd_to_stream___impl( long self, char* mode )
{
#line 306 "/home/morriar/dev/projects/nit/lib/core/file.nit"


		return fdopen((int)self, mode);
	}
long file___NativeFile_io_write___impl(  FILE*  self, char* buf, long from, long len )
{
#line 1509 "/home/morriar/dev/projects/nit/lib/core/file.nit"


		return fwrite(buf+from, 1, len, self);
	}
long file___Sys_buffer_mode_line___impl( void* self )
{
#line 1586 "/home/morriar/dev/projects/nit/lib/core/file.nit"

 return _IONBF; }
 struct stat *  file___CString_file_stat___impl( char* self )
{
#line 1399 "/home/morriar/dev/projects/nit/lib/core/file.nit"


		struct stat buff;
		if(stat(self, &buff) != -1) {
			struct stat* stat_element;
			stat_element = malloc(sizeof(struct stat));
			return memcpy(stat_element, &buff, sizeof(struct stat));
		}
		return 0;
	}
 struct stat *  file___CString_file_lstat___impl( char* self )
{
#line 1409 "/home/morriar/dev/projects/nit/lib/core/file.nit"


#ifdef _WIN32
		// FIXME use a higher level abstraction to support WIN32
		return NULL;
#else
		struct stat* stat_element;
		int res;
		stat_element = malloc(sizeof(struct stat));
		res = lstat(self, stat_element);
		if (res == -1) return NULL;
		return stat_element;
#endif
	}
int file___CString_file_delete___impl( char* self )
{
#line 1433 "/home/morriar/dev/projects/nit/lib/core/file.nit"


		return remove(self) == 0;
	}
char* file___NativeDir_readdir___impl(  DIR*  self )
{
#line 1563 "/home/morriar/dev/projects/nit/lib/core/file.nit"


		struct dirent *de;
		de = readdir(self);
		if (!de) return NULL;
		return de->d_name;
	}
void file___NativeDir_closedir___impl(  DIR*  self )
{
#line 1560 "/home/morriar/dev/projects/nit/lib/core/file.nit"

 closedir(self); }
int file___CString_rmdir___impl( char* self )
{
#line 1431 "/home/morriar/dev/projects/nit/lib/core/file.nit"

 return !rmdir(self); }
int file___NativeFileStat_is_dir___impl(  struct stat *  self )
{
#line 1473 "/home/morriar/dev/projects/nit/lib/core/file.nit"

 return S_ISDIR(self->st_mode); }
int file___CString_file_exists___impl( char* self )
{
#line 1386 "/home/morriar/dev/projects/nit/lib/core/file.nit"


#ifdef _WIN32
		DWORD attribs = GetFileAttributesA(self);
		return attribs != INVALID_FILE_ATTRIBUTES;
#else
		FILE *hdl = fopen(self,"r");
		if(hdl != NULL){
			fclose(hdl);
		}
		return hdl != NULL;
#endif
	}
char* file___CString_file_realpath___impl( char* self )
{
#line 1439 "/home/morriar/dev/projects/nit/lib/core/file.nit"


#ifdef _WIN32
		DWORD len = GetFullPathName(self, 0, NULL, NULL);
		char *buf = malloc(len+1); // FIXME don't leak memory
		len = GetFullPathName(self, len+1, buf, NULL);
		return buf;
#else
		return realpath(self, NULL);
#endif
	}
int file___CString_file_mkdir___impl( char* self, long mode )
{
#line 1423 "/home/morriar/dev/projects/nit/lib/core/file.nit"


#ifdef _WIN32
		return !mkdir(self);
#else
		return !mkdir(self, mode);
#endif
	}
 FILE*  file___new_NativeFile_io_open_read___impl( char* path )
{
#line 1542 "/home/morriar/dev/projects/nit/lib/core/file.nit"

 return fopen(path, "r"); }
 FILE*  file___new_NativeFile_io_open_write___impl( char* path )
{
#line 1544 "/home/morriar/dev/projects/nit/lib/core/file.nit"

 return fopen(path, "w"); }
 FILE*  file___new_NativeFile_native_stdin___impl(  )
{
#line 1546 "/home/morriar/dev/projects/nit/lib/core/file.nit"

 return stdin; }
 FILE*  file___new_NativeFile_native_stdout___impl(  )
{
#line 1548 "/home/morriar/dev/projects/nit/lib/core/file.nit"

 return stdout; }
 FILE*  file___new_NativeFile_native_stderr___impl(  )
{
#line 1550 "/home/morriar/dev/projects/nit/lib/core/file.nit"

 return stderr; }
 DIR*  file___new_NativeDir_opendir___impl( char* path )
{
#line 1557 "/home/morriar/dev/projects/nit/lib/core/file.nit"

 return opendir(path); }
char* file___Sys_native_getcwd___impl( void* self )
{
#line 1708 "/home/morriar/dev/projects/nit/lib/core/file.nit"

 return getcwd(NULL, 0); }
