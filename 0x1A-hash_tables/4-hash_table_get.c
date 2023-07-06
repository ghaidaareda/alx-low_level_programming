#include "hash_tables.h"
/**
 * hash_table_get-function that retrieves a value associated with a key
 * Return: value associated with a key
 * @ht: hash table you want to look into
 * @key:key you are looking for
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (key == NULL || ht == NULL)
	{
		return (NULL);
	}
	index = hash_djb2((const unsigned char *)key) % ht->size;
	for (node = ht->array[index]; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
	}
	return (NULL);
}
