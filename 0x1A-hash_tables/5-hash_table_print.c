#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - print the hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht ->array != NULL)
			node = ht->array[i];
		while (node != NULL)
		{
			printf("'%s': '%s', ", node->key, node->value);
			node = node->next;
		}
	}
	putchar('}');
	putchar('\n');
}
