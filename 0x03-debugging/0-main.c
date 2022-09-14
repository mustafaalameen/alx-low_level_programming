#include "main.h"

/**
 * positive_or_negative() - it returnstand indicates when a avalue is posittive
 * negative
 *
 * @n: positive or negative numbers
 * Return: no value.
 */

void positive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

}
