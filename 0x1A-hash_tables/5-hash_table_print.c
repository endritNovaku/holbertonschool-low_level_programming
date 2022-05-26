#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - print the hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);

	while(node != NULL)
	{
		printf("%s, %s\n", ht->, ht->value);
	}
}
