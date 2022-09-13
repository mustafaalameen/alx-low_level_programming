#include <stdio.h>

/**
 * print_alphabet_x10 - print alphabet in 10times
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	i = 0;

	while (i < 10)
	{
		j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');

		i++;
	}
}
