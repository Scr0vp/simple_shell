#include "shell.h"
/**
 * execute_command_sequence - Executes the specified command sequence.
 *
 * @sequence: An array of strings representing the command sequence.
 *
 * Return: void
 */
void execute_command_sequence(char *sequence[])
{
	pid_t pid;
	int status;

	if (sequence[0] == NULL)
		return;
	pid = fork();
	if (pid == -1)
	{
		perror("fork failed");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		if (execve(sequence[0], sequence, environ) == -1)
		{
			perror("Error executing command");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		waitpid(pid, &status, 0);
	}
}
