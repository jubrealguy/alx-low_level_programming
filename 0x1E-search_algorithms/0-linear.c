#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>

/**
 * linear_search - Check for a value in an array
 * @array: The array to check from
 * @size: Length of the array
 * @value: Value to check for
 * Return: Return -1 if failed
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = %d\n", i, array[i]);
		if (array[i] == value)
		{
			break;
			return (i);
		}
	}
	return (-1);
}
