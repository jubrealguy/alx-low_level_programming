#include "main.h"
/**
 * _isalpha- Check for letter
 * @c: character to check
 * Description: function returns 1 if the character is a letter,
 * lowercase or uppercase
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
