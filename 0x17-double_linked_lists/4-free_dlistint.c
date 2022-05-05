#include "lists.h"
/**
 * free_listint - free a list
 * @head: head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next; 
		free(tmp);
	}
}
