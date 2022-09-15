#include "main.h"

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
