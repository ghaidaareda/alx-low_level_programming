#include "hash_tables.h"
/**
 *
 *
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	int i;
	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			if(ht->array[i])
			{
				printf("{'%s': '%s'}", ht->array[i]->key, ht->array[i]->value)
			}
		}
	}
	printf("{}")
}

