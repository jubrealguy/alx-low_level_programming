#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always (success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
		putchar(a % 10);
	putchar('\n');
	return (0);
}
