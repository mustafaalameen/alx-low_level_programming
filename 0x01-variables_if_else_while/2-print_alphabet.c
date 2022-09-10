#include <stdio.h>
/**
 * main  - Entrypoint
 *
 * Return: 0 (Exit successfully)
 */

int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		putchar(chr);
	}

	putchar('\n');

	return (0);
}
