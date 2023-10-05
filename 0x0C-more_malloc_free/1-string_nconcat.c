#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates one string to another
 * @s1: string one
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, ptr1 = 0, ptr2 = 0;

	while (s1 && s1[ptr1])
		ptr1++;
	while (s2 && s2[ptr2])
		ptr2++;

	if (n < ptr2)
		p = malloc(sizeof(char) * (ptr1 + n + 1));
	else
		p = malloc(sizeof(char) * (ptr1 + ptr2 + 1));

	if (!p)
		return (NULL);

	while (i < ptr1)
	{
		p[i] = s1[i];
		i++;
	}

	while (n < ptr2 && i < (ptr1 + n))
		p[i++] = s2[j++];

	while (n >= ptr2 && i < (ptr1 + ptr2))
		p[i++] = s2[j++];

	p[i] = '\0';

	return (p);
}
