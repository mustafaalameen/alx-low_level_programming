#include <stdio.h>
#include "main.h"
/**
 * _abs - return absolute value
 * @n: value to be checked
 *
 * Return: absolute value
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
