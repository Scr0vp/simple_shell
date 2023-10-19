#include "shell.h"
/**
 * *_bd_remove_newline - responsible for removing '\n'
 * present in the string
 * _strip_newline - holds the function to remove line
 * @string: repesenting the where newlines are removed
 * @longii: the total lenth of of input
 * Return: pointer to modified input
 */
char *_bd_remove_newline(char *string, int longii)
{
	if (string == NULL || longii <= 0)
		return (string);
	if (string[longii - 1] == '\n')
		string[longii - 1] = '\0';
	return (string);
}
