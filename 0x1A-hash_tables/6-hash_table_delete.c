#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i] != NULL)
			{
				tmp = ht->array[i]->next;
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
				ht->array[i] = tmp;
			}
			free(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}
