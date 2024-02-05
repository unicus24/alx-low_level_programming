#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array to be created
 *
 * Return: pointer to the newly created hash table, or NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;
	hash_node_t **newArray;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	newArray = malloc(sizeof(hash_node_t *) * size);
	if (!newArray)
		return (NULL);

	for (i = 0; i < size; i++)
		newArray[i] = NULL;

	newTable = malloc(sizeof(hash_table_t));
	if (!newTable)
		return (NULL);

	newTable->size = size;
	newTable->array = newTrray;

	return (newTable);
}
