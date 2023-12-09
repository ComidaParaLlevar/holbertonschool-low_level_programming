#include "hash_tables.h"
/**
 * hash_table_create - allocates a hash table struct
 * @size: size of array
 *
 * Return: pointer to newly created hash table, NULL if failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	hash_table_t **array = NULL;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NUll);

	array = malloc(sizeof(hash_table_t) * size);
	if (array == NULL)
		return (NULL);

	while (i < size)
	{
		i++;
		array[i] = NULL;
	}
	table->size = size;
	table->array = array;

return (table);
}


