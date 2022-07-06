#include <limits.h>
#include "main.h"
/**
 * print_last_digit - print last digit of integer
 * @n: interger argument
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		r = -1 * (n % 10);
	}
	else
	{
		r = n % 10;
	}
	_putchar('0' + (r % 10));
	return (r % 10);
}
