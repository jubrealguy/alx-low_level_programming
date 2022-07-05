#include <stdio.h>
#include <stdlib.h>
#include <main.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char put[] = "_putchar";
	int i;

	for(i = 0; i < strlen(put); i++)
	{
		putchar(put[i]);
	}
	return (0);
}
