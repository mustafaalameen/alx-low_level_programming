#include "main.h"

/**
 * swap_int - Swaps two values
 * @a: the first pointer to an integer
 * @b: the second pointer to an integer
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
