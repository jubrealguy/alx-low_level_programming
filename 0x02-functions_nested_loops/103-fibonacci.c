#include <stdio.h>
/**
 * main - print sum of even Fionacci sequence up to 4,000,000
 * Return: 0
 */

int main(void)
{
	long unsigned int a = 1;
	long unsigned int b = 2;
	long unsigned int sum = 2;
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

/**
 * int main(void)
{
	int sum_of_evens = 0;
	int a, b;
	int sum = 1;

	a = 1;
	b = 1;

	while (b < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
		{
			sum_of_evens += sum;
		}
	}
	printf("%d\n", sum_of_evens);
	return (0);
}
**/
