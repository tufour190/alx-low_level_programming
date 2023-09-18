#include "main.h"

/**
 * _puts - ps function rints a string to stdout
 * @str: this is a pointer to the string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
