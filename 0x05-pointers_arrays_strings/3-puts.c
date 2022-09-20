#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: pointers to a string
 */

void _puts(char *str)
{
	int i;

	while (*str != '\0')
	{
		stri = *str[i];
		_putchar(stri);
		str++;
		i++;
	}

	_putchar('\n');
}
