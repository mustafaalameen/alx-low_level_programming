#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Exit Successfully)
 */

int main(void)
{
	char chr;

	for (chr = 'z' ; chr >= 'a' ; chr--)
	{
		putchar(chr);
	}

	putchar('\n');

	return (0);
}
