#include <shell.h>

/**
 * _strcat - concatenate two strings.
 * @dest: Destination string.
 * @src: source string.
 *
 * Return: Pointer to the destination string.
 */
char *_strcat(char *dest, const char *src)
{
	int s;
	int v;

	for (s = 0; dest[s], != '\0'; s++)
		;
	for (v = 0; src[v] != '\0'; v++)
	{
		dest[s] = src[v];
		s++;
	}

	dest[s] = '\0';
	return (dest);

}

/**
 * _strcpy - copy the string pointed to by src.
 * @dest: Destination string
 * @src: source string
 *
 * Return: Pointer to the destination string
 */
char *_strcpy(char *dest, const char *src)
{
	int s;

	for (s = 0; src[s] != '\0'; s++)
	{
		dest[s] = src[s];
	}

	dest[s] = '\0';
	return (dest);
}

/**
 * _strcmp - Compare two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 if strings are equal, positive if s1 > s2, otherwise negative.
 */
int _strcmp(const char *s1, const char s2)
{
	int s;

	for (s = 0; s1[s] == s2[s] && s1[s] != '\0'; s++)
		;
	return (s1[s] - s2[s]);
}

/**
 * _strchr - Locate a character in a string.
 * @s: String
 * @c: Character to locate
 *
 * Return: Pointer to the first occurrence of the character c in s,
 * or NULL if not.
 */
char *_strchr(const char *s, int c)
{
	unsigned int s;

	for (s = 0; *(s + s) != '\0'; s++)
		if (*(s + s) == c)
			return ((char *)(s + s));
	if (*(s + s) == c)
		return ((char *)(s + s));
	return (NULL);
}

/**
 * _strspn - get the length of a prefix substring
 * @s: Initial segment
 * @accept: Accepted bytes.
 *
 * Return: Number of accepted bytes
 */
size_t _strspn(const char *s, const char *accept)
{
	int s;
	int v;
	int bool;

	for (s = 0; s[s] != '\0'; s++)
	{
		bool = 1;
		for (v = 0; accept[v] != '\0'; v++)
		{
			if (s[s] == accept[v])
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (s);
}
