#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/*
 * add_nodeint - add a new node at the beggining
 * head: node
 * Return: head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));

	if (!new_head || !n)
		return (NULL);

	if (new_head)
	{
		new_head->n = n;
		if (!n)
		{
			free(new_head);
			return (NULL);
		}
		
		new_head->next = (*head);

		(*head) = new_head;

		return (new_head);
	}

	return (NULL);
}
