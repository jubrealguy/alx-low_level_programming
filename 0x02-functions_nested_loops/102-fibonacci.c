#include <stdio.h>
/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	long unsigned int a = 1;
	long unsigned int b = 2;
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

/**
int main(void)
{
	int counter;
	int countto = 50;
	long a = 1;
	long b = 2;

	for (counter = 1; counter <= (countto / 2); counter++)
	{
		if (counter < (countto / 2))
		{
			printf("%li, %li, ", a, b);
			a += b;
			b += a;
		}
		else if (counter == (countto / 2))
		{
			printf("%li, %li", a, b);
			a += b;
			b += a;
		}
	}
	if (countto % 2 == 1)
	{
		printf("%li", a);
	}
	printf("\n");
	return (0);
}

**/
