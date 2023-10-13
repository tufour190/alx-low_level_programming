#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int m = 0;
	char *len, *string_sep = "";

	va_list string_list;

	va_start(string_list, format);

	if (format)
	{
		while (format[m])
		{
			switch (format[m])
			{
				case 'c':
					printf("%s%c", string_sep, va_arg(string_list, int));
					break;
				case 'i':
					printf("%s%d", string_sep, va_arg(string_list, int));
					break;
				case 'f':
					printf("%s%f", string_sep, va_arg(string_list, double));
					break;
				case 's':
					len = va_arg(string_list, char *);
					if (!len)
						len = "(nil)";
					printf("%s%s", string_sep, len);
					break;
				default:
					m++;
					continue;
			}
			string_sep = ", ";
			m++;
		}
	}

	printf("\n");
	va_end(string_list);
}
