#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of any value
 * @n: value to be use d in the function
 *
 * Return: value of last digit.
 */

int print_last_digit(int n)
{
	int lst_dig;

	lst_dig = n % 10;
	
	if (lst_dig < 0)
	{
		_putchar(-lst_dig + 48);
		return (-lst_dig);
	}
	else
	{
		_putchar(lst_dig + 48);
		return (lst_dig);
	}
}
