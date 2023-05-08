#include <stdio.h>
#include "search_algos.h"

/**
 * print_search - prints the array searched
 * @array: array to be printed
 * @x: starting index
 * @y: ending index
 * Return: Return on success
 */

int print_search(int *array, int x, int y)
{
	int i;

	printf("Searching in array: ");
	for (i = x; i <= y; i++)
	{
		printf("%d", array[i]);
		if (i == y)
			continue;
		printf(", ");
	}
	printf("\n");
	return (0);
}

/**
 * binary_search - searching an array for an index in a binary search algorithm
 * @array: Array to be searched
 * @size: Length of the array
 * @value: Value to be searched for
 * Return: Return index and -1 on fail
 */

int binary_search(int *array, size_t size, int value)
{
	int left_index = 0;
	int right_index = size - 1;

	if (size == 0 || array == NULL)
		return (-1);

	while (left_index <= right_index)
	{
		int mid_index = left_index + (right_index - left_index) / 2;

		print_search(array, left_index, right_index);

		if (array[mid_index] == value)
		{
			return (mid_index);
		}
		else if (array[mid_index] < value)
		{
			left_index = mid_index + 1;
		}
		else
		{
			right_index = mid_index - 1;
		}
	}
	return (-1);
}
