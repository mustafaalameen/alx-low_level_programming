#include "main.h"

/**
 * positive_or_negative - it returnstand indicates when a avalue is posittive
 * negative
 * @i: positive or negative numbers
 *
 * Return: no value.
 */

void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}

}
