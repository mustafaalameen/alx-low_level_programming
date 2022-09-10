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
		if (chr != 'q' && chr != 'e')
		{
			putchar(chr);
		}
	}

	putchar('\n');

	return (0);
}
