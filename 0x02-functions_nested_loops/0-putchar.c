#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
i * Return: 0 when successful
 */

int main(void)
{
	char pv[] =  "_putchar";

	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(pv[i]);
	}

	_putchar('\n');

	return (0);
}
