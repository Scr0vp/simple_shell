#include "shell.h"

/**
 * bd_strncpy - copies a string
 * @dest: the destination string to be copied
 * @src: the source string
 * @n: the number of characters to be copied
 *
 * Return: the pointer to the destination string.
 */
char *bd_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n - 1 && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; ++i)
	{
		dest[i] = '\0';
	}
	return (dest);
}

/**
 * _strncat - Concatenates two strings
 * @dest: The first string
 * @src: the second string
 * @n: the maximum number of bytes to be used from src
 *
 * Return: The pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; ++i)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strchr - locates a character in a string
 * @s: the string to be parsed
 * @c: the character to look for
 * Return: the pinter to the first occurence of c in s,
 * or NULL if not.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
