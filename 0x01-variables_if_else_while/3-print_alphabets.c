#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Exit Successfully)
 */

int main(void)
{
	char chr;

	for (chr = 'a' ; chr <= 'z' ; chr++)
	{
		putchar(chr);
	}
	for (chr = 'A'; chr <= 'Z' ; chr++)
	{
		putchar(chr);
	}

	putchar('\n');

	return (0);
}
