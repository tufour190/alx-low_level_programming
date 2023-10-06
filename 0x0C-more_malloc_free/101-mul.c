#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - function that finds if a string contains a non-digit char
 * @s: string to be checked
 *
 * Return: 0 if a non-digit is found else 1
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - checks  the length of a string
 * @s: string to be evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - computes multiplication of  two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *t1, *t2;
	int mee1, mee2, mee, i, multi, numb1, numb2, *result, j = 0;

	t1 = argv[1], t2 = argv[2];
	if (argc != 3 || !is_digit(t1) || !is_digit(t2))
		errors();
	mee1 = _strlen(t1);
	mee2 = _strlen(t2);
	mee = mee1 + mee2 + 1;
	result = malloc(sizeof(int) * mee);
	if (!result)
		return (1);
	for (i = 0; i <= mee1 + mee2; i++)
		result[i] = 0;
	for (mee1 = mee1 - 1; mee1 >= 0; mee1--)
	{
		numb1 = t1[mee1] - '0';
		multi = 0;
		for (mee2 = _strlen(t2) - 1; mee2 >= 0; mee2--)
		{
			numb2 = t2[mee2] - '0';
			multi += result[mee1 + mee2 + 1] + (numb1 * numb2);
			result[mee1 + mee2 + 1] = multi % 10;
			multi /= 10;
		}
		if (multi > 0)
			result[mee1 + mee2 + 1] += multi;
	}
	for (i = 0; i < mee - 1; i++)
	{
		if (result[i])
			j = 1;
		if (j)
			_putchar(result[i] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
