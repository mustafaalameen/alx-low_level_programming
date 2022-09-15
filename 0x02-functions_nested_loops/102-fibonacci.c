#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */


int main(void)
{
	long int a;
	long int b;
	long int sum;
	int i;
	int n = 50;

	a = 1;
	b = 2;

	printf("%lu, %lu, ", a, b);

	for (i = 0; i < (n - 2); i++)
	{
		sum = a + b;

		if (i != 47)
			printf("%lu, ", sum);
		else
			printf("%lu ", sum);
		a = b;
		b = sum;
	}

	return (0);
}
