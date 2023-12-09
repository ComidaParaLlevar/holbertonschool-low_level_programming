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
	hash_node_t **array = NULL;
	unsigned long int i = 0;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_table_t *) * size);
	if (array == NULL)
		return (NULL);

	while (i < size)
	{
		array[i] = NULL;
		i++;
	}
	table->size = size;
	table->array = array;

return (table);
}


