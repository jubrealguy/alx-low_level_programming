#include <stdio.h>
/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	int i;

	printf("%lu, %lu, ", a, b);

	for (i = 0; i < 24; i++)
	{
		a = b + a;
		b = a + b;

		printf("%lu, %lu", a, b);

		if (i == 23)
			continue;
		printf(", ");
	}
	printf("\n");
	return (0);
}
