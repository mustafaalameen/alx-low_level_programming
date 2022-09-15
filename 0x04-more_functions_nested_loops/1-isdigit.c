#include "main.h"

/**
 * _isdigit - return 1 if character is digit and o
 * if otherwise
 * @c: value to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	int boole;

	if ((c >= 48) && (c <= 57))
	{
		boole = 1;
	}
	else
		boole = 0;

	return (boole);
}
