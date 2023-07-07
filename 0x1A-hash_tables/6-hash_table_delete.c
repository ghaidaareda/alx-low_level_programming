#include "hash_tables.h"
/**
 * hash_table_delete - function that prints a hash table
 * @ht: hash table to print
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node, *next;

	if (ht)
	{
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			next = node->next;
			free(node->value);
			free(node->key);
			free(node);
			node = next;
		}
	}
	}
	free(ht->array);
	free(ht);
}
