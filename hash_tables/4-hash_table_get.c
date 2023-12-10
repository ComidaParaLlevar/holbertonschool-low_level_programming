#include "hash_tables.h"
/**
 * hash_table_get - gets a value of a key posotion'
 * @ht: hash table
 * @key: key
 *
 * Return: Value of element, NULL if failure
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *get = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);
	get = ht->array[i];

	if (get == NULL)
		return (NULL);

	while (strcmp(key, get->key) != 0)
		get = get->next;

	return (get->value);
}

