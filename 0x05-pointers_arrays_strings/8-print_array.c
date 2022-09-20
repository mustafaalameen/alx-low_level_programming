#include <stdio.h>
#include "main.h"

/**
 * print_array -  prints n elements of an array of integers,
 * followed by a new line.
 * @a: pointers to an int
 * @n: parameter fo number of elements
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (i != n-1)
			printf("%d, " a[i]);
		else
			printf("%d" a[i]);
		a++;
		i++;
	}

	_putchar('\n');
}
