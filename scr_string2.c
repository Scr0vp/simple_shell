#include <shell.h>

/**
 * rev_string - reverses a string.
 * @s: input string.
 *
 * Return: no return.
 */
void rev_string(char *s)
{
	int lenght = 0;
	char temp;
	int start = 0;
	int end;

	while (s[length] != '\0')
	{
		length++;
	}
	end = length - 1;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
