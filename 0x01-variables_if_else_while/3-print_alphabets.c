#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char small_letter, capital_letter;

	for (small_letter = 'a'; small_letter <= 'z'; small_letter++)
		putchar(small_letter);
	for (capital_letter = ' '; capital_letter <= 'Z'; capital_letter++)
		putchar(capital_letter);
	return (0);
}
