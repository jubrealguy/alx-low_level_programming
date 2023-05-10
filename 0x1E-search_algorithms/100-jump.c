#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Function that uses the junp search algorithm
 * @array: Array to be searched
 * @size: Size of the array
 * @value: Value to be searched for
 * Return: Return -1 on fail
 */

int jump_search(int *array, size_t size, int value)
{
	int len = (int)size;
	int a = 0;
	int b = sqrt(len);
	int i, j;

	printf("Value checked array[0] = [0]\n");
	for (i = 0; i < len; i++)
	{
		if (array[b] < value && b < len)
			printf("Value checked array[%d] = [%d]\n", b, array[b]);
		for (j = a; j <= b; j++)
		{
			if (array[j] == value)
			{
				printf("Value found between indexes [%d] and [%d]\n", a, b);
				while (a <= j)
				{
					printf("Value checked array[%d] = [%d]\n", a, array[a]);
					a++;
				}
				return (j);
			}
		}
		if (a == len - 1 && value >= array[b])
		{
			printf("Value found between indexes [%d] and [%d]\n", a, b);
			printf("Value checked array[%d] = [%d]\n", a, array[a]);
		}

		a = b;
		b += sqrt(len);
	}
	return (-1);
}
