#include <stdio.h>
#include "main.h"
/**
 * _islower - outputs whether a character is lowercase or not
 * @c: The character to be checked
 *
 * Return: 1 or 0 (TRUE or FALSE)
 */

int _islower(int c)
{
	int boole;

	if (c >= 97 && c <= 122)
	{
		boole = 1;
	}
	else
	{
		boole = 0;
	}

	return (boole);
}
