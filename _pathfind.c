#include "scr_simple.h"

/**
* _pathfind - finds local path search
*
* Return: NULL if the path is not detected, or is detected
*/
char *_pathfind(void)
{
	int x;
	char **env = environ, *path = NULL;

	while (*env)
	{
		if (_stringmp(*env, "PATH=", 5) == 0)
		{
			path = *env;
			while (*path && x < 5)
			{
				path++;
				x++;
			}
			return (path);
		}
		env++;
	}
	return (NULL);
}
