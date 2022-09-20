#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: pointers to a string
 */

void _puts(char *str)
{
	int i;
	i = 0;

	while (*str != '\0')
	{
		if (i == 0)
			_putchar(*str[0]);
		else
			_putchar(*str[i);
		str++;
		i++;
	}

	_putchar('\n');
}
