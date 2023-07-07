#include "hash_tables.h"
/**
 * hash_table_delete - function that prints a hash table
 * @ht: hash table to print
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht)
	{
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			free(node->value);
			free(node->key);
			node = node->next;
		}
	}
	}
	free(ht);
}
