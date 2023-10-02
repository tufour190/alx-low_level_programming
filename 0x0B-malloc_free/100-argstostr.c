#include "main.h"
#include <stdlib.h>
/**
  *argstostr - function that concatenates all arguments of a program.
  *@ac: argument count or size
  *@av: pointer to size ac of array.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int i, n, r, count;
	char *arg;

	count = 0;
	r = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		n = 0;
		while (av[i][n])
		{
			count++;
			n++;
		}
		count++;
		i++;
	}
	arg = malloc((sizeof(char) * count) + 1);
	if (arg == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		n = 0;
		while (av[i][n])
		{
			arg[r] = av[i][n];
			n++;
			r++;
		}
		arg[r] = '\n';
		r++;
		i++;
	}
	arg[r] = '\0';
	return (arg);
}
