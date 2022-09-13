#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints all alphabet in lowercase
 *
 * Description: The print_alphabet function prints all alphabet from a-z
 * in lower case.
 * Return: 0 to exit successfully
 */

void print_alphabet(void)
{
	char chr;

	chr = 'a';

	while (chr <= 'z')
	{
		_putchar(chr);
		chr++;
	}
}
