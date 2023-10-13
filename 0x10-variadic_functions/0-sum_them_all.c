#include "variadic_functions.h"

/**
 * sum_them_all - function that computes the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum or  0 if n is equal to 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int m;
	int sum = 0;
	va_list numbers;

	va_start(numbers, n);

	for (m = 0; m < n; m++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}
