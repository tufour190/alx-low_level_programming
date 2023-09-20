#include "main.h"

/**
 * _strncat - this function appends n bytes from a string to another
 * @dest: string to which another string will be appended
 * @src: string to be appended
 * @n: number of bytes of str to be appended
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
