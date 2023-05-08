#include <stdio.h>
#include <string.h>
#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 0;
	int *new_arr = NULL;

	while (i <= size)
	{
		int mid = i + (size - i) / 2;
		if (array[mid] == value)
		{
			return mid;
		}
		else if (array[mid] < value)
		{
			i = mid + 1;
		}
		else
		{
			size = mid - 1;
		}
		new_arr[i] = array[i];
	}

	for (j = 0; i < size; j++)
	{
		printf("Searching in array: ");
		printf("%d, ", new_arr[j]);
	}
	printf("\n");
	return (-1);
}
