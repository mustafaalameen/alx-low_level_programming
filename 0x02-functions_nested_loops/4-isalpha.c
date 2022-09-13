#include <stdio.h>

/**
 * _isalpha - Checks whethere the argument is an alphabetic character
 * @c: parameter to be checked
 *
 * Return: 1 or 0 (TRUE or FALSE)
 */

int _isalpha(int c)
{
	int boole;

	if ((c >= 65 && c <= 90) && (c >= 97 && c <= 122))
	{
		boole = 1;
	}
	else
	{
		boole = 0;
	}

	return (boole);
}
