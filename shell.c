#include "shell.h"
/**
 * main - entry point of program and control
 * flow of program
 * Return: 0 on success and -1 on failure
 */
int main(void)
{
	bool is_input_from_pipe = false;

	if (!isatty(STDIN_FILENO))
	{
		is_input_from_pipe = true;
	}
	while (true)
	{
		if (!is_input_from_pipe)
		{
			present_prompt();
		}
		if (fetch_instruction() == 0)
			break;
	}
	return (0);
}
