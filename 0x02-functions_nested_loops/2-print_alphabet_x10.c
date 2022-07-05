#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabets ten times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch * '10');
	}
	_putchar('\n');
	return (0);
}
