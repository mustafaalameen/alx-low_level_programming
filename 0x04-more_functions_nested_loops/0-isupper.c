#include "main.h"

/**
* _isupper - return 0 or 1 if the character is uppercase
* @c: value to be checked
*
* Return: 0 or 1 (TRUE or FALSE)
*/


int _isupper(int c)
{
	int boole;

	if ((c >= 65) && (c <= 90))
	{
		boole = 1;
	}
	else
		boole = 0;

	return (boole);
}
