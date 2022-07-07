#include <stdio.h>

/**
 * main - check the code
 * Return: 0
 */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned long divisor;

	for (divisor = 2; divisor < num; divisor++)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
		}
	}
	printf("%ld\n", divisor);
	return (0);
}
