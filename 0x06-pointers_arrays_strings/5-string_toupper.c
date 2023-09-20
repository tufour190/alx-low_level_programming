#include "main.h"

/**
 * string_toupper - this function changes all lowercase letters of a string
 * to uppercase
 * @s: lowercase string to be converted to uppercase
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
