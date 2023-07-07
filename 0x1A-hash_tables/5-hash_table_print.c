#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	int pair = 0;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			if (pair == 0)
			{
				printf("{'%s': '%s'", node->key, node->value);
			}
			else
			{
				printf(", '%s': '%s'", node->key, node->value);
			}
		node = node->next;
		pair = 1;
		}
	}
		if (pair)
		{
			printf("}\n");
		}
		else
		{
			printf("{}\n");
		}
}
