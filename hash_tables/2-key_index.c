#include "hash_tables.h"
/**
 * key_index - gives index of a key
 * @key: is the key
 * @size: is size of array
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
