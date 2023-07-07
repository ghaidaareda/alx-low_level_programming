#include "hash_tables.h"
/**
 *hash_table_print-function that prints a hash table
 *Return:voit
 *@ht:hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	int pair = 0;
	hash_node_t *node;

	if (ht != NULL)
	{
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			node = ht->array[index];
			while (node != NULL)
			{
				if (pair > 0)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				pair++;
			}
		}
	}
	printf("}\n");
	}
	else
		return;
}
