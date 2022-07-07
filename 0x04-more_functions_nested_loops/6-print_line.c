#include "main.h"

/**
 * print_line- using _ to make a line
 * @n: number of _
 */

void print_line(int n)
{
	int a;

	a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
