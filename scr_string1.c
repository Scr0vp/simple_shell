#include "shell.h"

/**
 * _strdup - duplicates a str in the heap memory.
 * @s: Type char pointer str.
 *
 * Return: duplicate str.
 */
char *_strdup(const char *s)
{
	char *new;
	size_t len;

	len = _strlen(s);
	new = malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	_memcpy(new, s, len + 1);
	return (new);
}

/**
 * _strlen - Return the length of a string.
 * @s: Type char pointer.
 *
 * Return: Length of the string.
 */
int _strlen(const char *s)
{
	int len;

	for (len = 0; s[len] != 0; len++)
		;
	return (len);
}

/**
 * cmp_chars - compare chars of strings.
 * @str: input string.
 * @delim: delimiter.
 *
 * Return: 1 is are equals, 0 if not.
 */
int cmp_chars(char str[], const char *delim)
{
	unsigned int s, v, k;

	for (s = 0, k = 0; str[s]; s++)
	{
		for (v = 0; delim[v]; v++)
		{
			if (str[s] == delim[v])
			{
				k++;
				break;
			}
		}
	}
	if (s == k)
		return (1);
	return (0);
}

/**
 * _strtok - splits a tring by some delimiter.
 * @str: input string.
 * @delim: delimiter.
 *
 * Return: string splited.
 */
char *_strtok(char str[], const char *delim)
{
	static char *spl, *str_end;
	char *str_start;
	unsigned int s, v, bool;

	if (str != NULL)
	{
		if (cmp_chars(str, delim))
			return (NULL);
		spl = str;
		s = _strlen(str);
		str_end = &str[s];
	}
	str_start = spl;
	if (str_start == str_end)
		return (NULL);

	for (bool = 0; *spl; spl++)
	{
		if (spl != str_start)
			if (*spl && *(spl - 1) == '\0')
				break;
		for (s = 0; delim[s]; s++)
		{
			if (*spl == delim[s])
			{
				*spl = '\0';
				if (spl == str_start)
					str_start++;
				break;
			}
		}
		if (bool == 0 && *spl)
			bool = 1;
	}
	if (bool == 0)
		return (NULL);
	return (str_start);
}

/**
 * _isdigit - defines if string passed is a number.
 * @s: input string.
 *
 * Return: 1 if string is a number, otherwise 0.
 */
int _isdigit(const char *s)
{
	unsigned int s;

	for (s = 0; s[s]; s++)
	{
		if (s[s] < 48 || s[s] > 57)
			return (0);
	}
	return (1);
}
