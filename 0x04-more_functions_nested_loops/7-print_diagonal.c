#include "main.h"

/**
 * print_diagonal - print backlash to form a diagonal
 * @n: number of backlash
 * Return: 0
 */

void print_diagonal(int n)
{
	int a;

	a = 0;

	while (a < n && n > 0)
	{
		int b;

		b = 0;

		while (b < a)
		{
			_putchar(' ');
			b++;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
	_putchar('\n');
	if (a == 0)
	{
		_putchar('\n');
	}
}
