#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Exit Successfully)
 */

int main(void)
{
	char chr;

	for (chr = '0' ; chr <= '9'; chr++)
	{
		putchar(chr);
	}

	for (chr = 'a' ; chr < 'g'; chr++)
	{
		putchar(chr);
	}

	putchar('\n');

	return (0);
}

