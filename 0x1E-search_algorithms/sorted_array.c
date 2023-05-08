#include <stdio.h>

int main(void)
{
	int array[6] = {5, 3, 2, 6, 4, 1};
	int i, j;
	int a;

	for (i = 0; i < 6; i++)
	{
		for (j = i+1; j < 6; j++)
		{
			if (array[i] > array[j])
			{
				a = array[i];
				array[i] = array[j];
				array[j] = a;
			}
		}
		printf("%d\n", array[i]);
	}
	return (0);
}
