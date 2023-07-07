#include "hash_tables.h"
/**
 *hash_table_set-function that adds an element to the hash table
 *Return: 1 if it succeeded, 0 otherwise
 *@ht:hash table you want to add or update the key/value to
 *@key:key
 *@value:value associated with the key
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newnode;
	
	if (key == NULL || ht == NULL || ht->array == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key , ht->size);
	newnode = ht->array[index];
	while (newnode != NULL)
	{
		if (strcmp(newnode->key, key) == 0)
		{
			free(newnode->value);
			newnode->value = strdup(value);
			return (1);
		}
		newnode = newnode->next;
	}
	newnode = ht->array[index];
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	{
		return (0);
	}
	newnode->key = strdup(key);
	if (value == NULL)
		newnode->value = NULL;
	else
	{
	newnode->value = strdup(value);
	}
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
