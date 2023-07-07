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
	int has_pair = 0;

	if (ht != NULL)
	{
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
		if (pair == 0)
		{
			printf("{'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
		}
		else
		{
			printf(", '%s': '%s'", ht->array[index]->key, ht->array[index]->value);
		}
		pair++;
		has_pair = 1;
		}
	}
		if (has_pair)
		{
			printf("}\n");
		}
		else
		{
			printf("{}\n");
		}
	}
}
