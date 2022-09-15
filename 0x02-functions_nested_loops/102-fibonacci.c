#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */


int main(void)
{
	int a;
	int b;
	int sum;
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
