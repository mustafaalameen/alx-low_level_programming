#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointers to a string
 */

void print_rev(char *s)
{
	int leng;

	for (leng = 0; s[leng] != '\0'; leng++)
	{
	}
	for (leng = leng - 1; leng >= 0; leng--)
	{
		_putchar(s[leng]);
	}

	_putchar('\n');
}
