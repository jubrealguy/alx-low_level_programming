#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always (success)
 */
int main(void)
{
	signed char a;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
