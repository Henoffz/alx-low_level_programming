#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned long int checker = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (checker == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			checker = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
