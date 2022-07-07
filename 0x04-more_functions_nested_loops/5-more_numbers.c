#include "main.h"

/**
 * more_numbers - printsnumber 0 -14 ten times
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int a;

		for (a = 0; a < 15; a++)
		{
			_putchar(a + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
