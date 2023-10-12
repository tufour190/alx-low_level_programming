#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be searched in
 * @size: size of the array
 * @cmp: pointer to the function
 * to be used to compare values
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no element matches
 * or size is negative or equal to 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array && cmp)
	{
		for (n = 0; n < size; n++)
		{
			if (cmp(array[n]) != 0)
				return (n);
		}
	}

	return (-1);
}
