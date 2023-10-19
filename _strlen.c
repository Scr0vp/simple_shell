#include "shell.h"
/**
 * _bd_strlen - reponsible for calculating the lenth of
 * string
 * @string: represents source where length is been calculated
 *
 * Return: number of bytes
 */
size_t _bd_strlen(const char *string)
{
	size_t longii = 0;

	while (string[longii] != '\0')
	{
		longii++;
	}
	return (longii);
}
