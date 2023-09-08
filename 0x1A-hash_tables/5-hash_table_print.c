#include "hash_tables.h"

/**
 * hash_table_print -  function that prints a hash table
 * @ht: the hash table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int b;
	unsigned char key_value;

	if (ht == NULL)
		return;

	printf("{");
	for (b = 0; b < ht->size; b++)
	{
		if (ht->array[b] != NULL)
		{
			if (key_value == 1)
				printf(", ");

			node = ht->array[b];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			key_value = 1;
		}
	}
	printf("}\n");
}
