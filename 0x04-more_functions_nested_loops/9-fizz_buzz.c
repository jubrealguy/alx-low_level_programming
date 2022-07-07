#include <stdio.h>
#include <stdlib.h>

/**
 * main - fizzbuzz code
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", num);
		}
		if (num != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
