#include "shell.h"
/**
 * fetch_instruction - responsible for retrieving commands
 * from stdin processing and execution of the sequence
 * Return: always void
 */
int fetch_instruction(void)
{
	size_t line_len = 0;
	char *line_buffer = NULL;
	char *instruction;
	char *sequence[SEQUENCE_LENGTH];
	int line_content;

	line_content = getline(&line_buffer, &line_len, stdin);
	if (line_content == -1)
	{
		if (feof(stdin))
		{
			_bd_output("\n");
			free(line_buffer);
			return (0);
		}
		perror("getline unsuccessful");
		free(line_buffer);
		return (-1);
	}
	instruction = _bd_remove_newline(line_buffer, line_content);
	split_and_store(instruction, sequence);
	execute_command_sequence(sequence);
	free(line_buffer);
	return (line_content);
}
