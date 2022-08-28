#include <stdio.h>
/**
 * main - print sum of even Fionacci sequence up to 4,000,000
 * Return: 0
 */

int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int sum = 2;
	int i;

	for (i = 0; b < 4000000; i++)
	{
		a = b + a;
		b = a + b;

		if (b % 2 == 0)
		{
			sum += b;
		}
		if (a % 2 == 0 && a < 4000000)
		{
			sum += a;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
