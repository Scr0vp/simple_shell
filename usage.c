#include "scr_simple.h"

/**
 * usage - commands used by users
 * @cp:command
 * @cmd:series of pointers go directly to orders
 *
 * Return: 0
 */
void usage(char *cp, char **cmd)
{
	pid_t child_pid;
	int status;
	char **env = environ;

	child_pid = fork();
	if (child_pid < 0)
		perror(cp);
	if (child_pid == 0)
	{
		execve(cp, cmd, env);
		perror(cp);
		free(cp);
		_supplies(cmd);
		exit(98);
	}
	else
		wait(&status);
}
