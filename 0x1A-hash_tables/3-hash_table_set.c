#include "hash_tables.h"

/**
 * hash_table_set -a function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: the value associated with the key
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_elem;
	char *value_associated;
	unsigned long int idx, b;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_associated = strdup(value);
	if (value_associated == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (b = idx; ht->array[b]; b++)
	{
		if (strcmp(ht->array[b]->key, key) == 0)
		{
			free(ht->array[b]->value);
			ht->array[b]->value = value_associated;
			return (1);
		}
	}

	new_elem = malloc(sizeof(hash_node_t));
	if (new_elem == NULL)
	{
		free(value_associated);
		return (0);
	}

	new_elem->key = strdup(key);
	if (new_elem->key == NULL)
	{
		free(new_elem);
		return (0);
	}
	new_elem->value = value_associated;
	new_elem->next = ht->array[idx];
	ht->array[idx] = new_elem;

	return (1);
}
