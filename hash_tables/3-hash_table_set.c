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
	unsigned long int i, index;
	char *val_dup = NULL;
	hash_node_t *new_n = NULL;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	val_dup = strdup(value);
	if (val_dup == NULL)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	index = i;
	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = val_dup;
			return (1);
		}
		index++;
	}
	new_n = malloc(sizeof(hash_node_t));
	if (new_n == NULL)
	{
		free(val_dup);
		return (0);
	}
	new_n->key = strdup(key);
	if (new_n->key == NULL)
	{
		free(new_n);
		return (0);
	}
	new_n->value = val_dup;
	new_n->next = ht->array[i];
	ht->array[i] = new_n;
return (1);
}



