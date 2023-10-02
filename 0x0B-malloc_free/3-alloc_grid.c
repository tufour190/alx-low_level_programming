#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates and return  a 2D array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (fail)
 */
int **alloc_grid(int width, int height)
{
	int **tree;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	tree = (int **) malloc(sizeof(int *) * height);

	if (tree == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		tree[i] = (int *) malloc(sizeof(int) * width);
		if (tree[i] == NULL)
		{
			free(tree);
			for (j = 0; j <= i; j++)
				free(tree[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			tree[i][j] = 0;
		}
	}
	return (tree);
}
