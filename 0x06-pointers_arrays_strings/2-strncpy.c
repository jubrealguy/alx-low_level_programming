#include "main.h"

/**
 * *_strncat - Check the code
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to copy
 * Description: A function that combines two strings
 * Return: the pointer to resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
