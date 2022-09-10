#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Exit Successfully)
 */

int main(void)
{
	int val;

	for (val = 48 ; val <= 57 ; val++)
	{
		putchar((char) val);

		if (val != 57)
		{
			putchar(',');
		}
	}

	putchar('\n');

	return (0);
}

