#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */


int main(void)
{
	long unsigned int a;
	long unsigned int b;
	long unsigned int sum;
	int i;

	a = 1;
	b = 2;

	printf("%lu, %lu, ", a, b);

	for (i = 0; i < 47; i++)
	{
		sum = a + b;

		if (i != 46)
			printf("%lu, ", sum);
		else
			printf("%lu", sum);
		a = b;
		b = sum;
	}

	return (0);
}
