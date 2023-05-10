#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - using the interpolation search algorithm
 * @array: array to be searched
 * @size: size of array
 * @value: value to search for
 * Return: Return -1 on failed
 */

int interpolation_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = (int)size - 1;
	int pos;

	if (array == NULL)
		return (-1);

	pos = left + (((double)(right - left) / (array[right] - array[left]))
		   * (value - array[left]));

	while (pos < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		else if (array[pos] < value)
			left = pos + 1;

		else
			right = pos - 1;

		pos = left + (((double)(right - left) / (array[right] - array[left]))
			   * (value - array[left]));
	}

	printf("Value checked array[%d] is out of range\n", pos);
	return (-1);
}
