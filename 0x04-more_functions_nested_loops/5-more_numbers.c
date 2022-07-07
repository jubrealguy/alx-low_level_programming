#include "main.h"

/**
 * more_numbers - printsnumber 0 -14 ten times
 */

void more_numbers(void)
{
	int i, a;

	for (i = 0; i < 10; i++)
	{

		for (a = 0; a < 15; a++)
		{
			if (a / 10 > 0)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
