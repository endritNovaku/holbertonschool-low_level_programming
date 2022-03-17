#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free the list
 * @head: the list
 */

void free_list(list_t *head)
{
	list_t node;

	while ( head->str != NULL)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
