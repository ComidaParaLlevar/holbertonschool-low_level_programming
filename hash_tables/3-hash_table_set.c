#include "hash_tables.h"
/**
 * hash_table_set - adds element to hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 *
 * Return: 1 if successful, 0 if failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	char *val_dup = NULL;
	hash_node_t *new_n = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	val_dup = strdup(value);

	i = key_index((unsigned char *)key, ht->size);

	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val_dup;
			return (1);
		}
		i++;
	}
	new_n = malloc(sizeof(hash_node_t));
	if (new_n == NULL)
		return (0);

	new_n->value = val_dup;
	new_n->next = ht->array[i];
	ht->array[i] = new_n;
return (1);
}



