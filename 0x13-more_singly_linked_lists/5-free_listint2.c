#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free list
 * @head: the beginning of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		(*head) = tmp;
	}
	*head = NULL;
}
