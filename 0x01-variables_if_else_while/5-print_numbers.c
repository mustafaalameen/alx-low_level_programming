#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Exit Successfully)
 */

int main(void)
{
	char chr = '0';

	while (chr <= '9')
	{
		putchar(chr);
		chr++;
	}

	putchar('\n');

	return (0);
}

