#include "scr_simple.h"

/**
* _pathvalid - valid Check if the path is valid
*
* @path: symbolzed
* @command: user made or entered the cmmd
*
* Return: succeed
*/
char *_pathvalid(char **path, char *command)
{
	int i = 0;
	char *output;

	while (path[i])
	{
		output = _end(path[i], command);
		if (access(output, F_OK | X_OK) == 0)
			return (output);
		free(output);
		i++;
	}
	return (NULL);
}
