#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: size of hash table created
 * Return: pointer to the new hash table created
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *arr = malloc(size * sizeof(hash_table_t));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = NULL;
	}

	arr->size = size;

	return (arr);
}
