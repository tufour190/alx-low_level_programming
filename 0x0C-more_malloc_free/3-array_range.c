#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function that creates an array of integers
 * @min: minimum value of the range
 * @max: maximum value of range  and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *a;
	int i, count;

	if (min > max)
		return (NULL);

	count = max - min + 1;

	a = malloc(sizeof(int) * count);

	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		a[i] = min++;

	return (a);
}
