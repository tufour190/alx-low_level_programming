#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: number of bytes reserved
 *
 * Return: a pointer to the reserved  memory
 */
void *malloc_checked(unsigned int b)
{
	void *pnt;

	pnt = malloc(b);

	if (pnt == NULL)
		exit(98);

	return (pnt);
}
