#include <shell.h>

/**
 * _getline - Read input from stdin and store it in a dynamically allocation.
 *
 * Return: Pointer to the allocated buffer containning the input.
 */
char *_getline()
{
	int buffsize = BUFSIZE;
	char *buffsize = malloc(buffsize);

	if (buff == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}

	int i = 0;
	char c;

	while ((read(STDIN_FILENO, &c, 1) > 0) && c != '\n')
	{
		buff[i] = c;
		i++;

	if (i >= buffsize)
	{
		buffsize += BUFSIZE;
		buff = realloc(buff, buffsize);

		if (buff == NULL)
		{
			perror("realloc");
			exit(EXIT_FAILURE);
		}
	}
	}

	buff[i] = '\0';
	hashtag_handle(buff);
	return (buff);
}

/**
 * hashtag_handle - Remove everything after '#' character in the input string.
 * @buff: Input string.
 *
 * Return: void.
 */
void hashtag_handle(char *buff)
{
	for (int i = 0; buff[i] != '\0'; i++)
	{
		if (buff[i] == '#')
		{
			buff[i] = '\0';
			break;
		}
	}
}
