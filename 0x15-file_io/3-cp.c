#include "main.h"
#include <stdio.h>

/**
 * mError - Print error message
 * @exitCode: exit code to stop
 * @format: data
 */
void mError(int exitCode, const char *format)
{
	dprintf(STDERR_FILENO, "%s\n", format);
	exit(exitCode);
}

/**
 * mErrorString - Print error message
 * @exitCode: exit code to stop
 * @format: data
 * @s: data
 */
void mErrorString(int exitCode, const char *format, const char *s)
{
	dprintf(STDERR_FILENO, "%s %s\n", format, s);
	exit(exitCode);
}
