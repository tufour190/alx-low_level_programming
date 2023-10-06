#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the previously allocated memory for ptr
 * @new_size: newly reallocated  size
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mee;
	char *old_mee;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	mee = malloc(new_size);
	if (!mee)
		return (NULL);

	old_mee = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			mee[i] = old_mee[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			mee[i] = old_mee[i];
	}

	free(ptr);
	return (mee);
}
