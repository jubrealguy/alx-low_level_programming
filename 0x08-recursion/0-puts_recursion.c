#include "main.h"
#include <string.h>

/**
 * _puts_recursion - printing a string
 * @s: the string to print
 */

void _puts_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		int len = strlen(s);

		for (i = 0; i < len; i++)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
