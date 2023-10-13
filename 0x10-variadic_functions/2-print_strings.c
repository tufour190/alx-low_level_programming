#include "variadic_functions.h"

/**
 * print_strings - functio that prints strings
 * @separator: string to be printed between the strings
 * @n: number of string arguments passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	char *len;

	va_list string_list;

	va_start(string_list, n);

	for (m = 0; m < n; m++)
	{
		len = va_arg(string_list, char *);
		if (!len)
			len = "(nil)";
		if (!separator)
			printf("%s", len);
		else if (separator && m == 0)
			printf("%s", len);
		else
			printf("%s%s", separator, len);
	}

	printf("\n");

	va_end(string_list);
}
