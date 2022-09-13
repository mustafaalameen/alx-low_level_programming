#include <stdio.h>
#include "main.h"
/**
 * print_sign - print ('+', '-', '0') if a certain condition is met
 * @n: integer value to be checked
 *
 *Return: 1 when value is positive
 *	 -1 when value is negative
 *	  0 when value is zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
