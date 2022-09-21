#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: pointers to an int
 * @n: parameter fo number of elements
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	int i;

    	for (i = 0; i < n; i++)
    	{	if ( i != n - 1)
			printf("%d, ", arr[i]);
		else
			printf("%d", arr[i]);
	}

	_putchar('\n');
}
