#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint_end - add node at the end
 * @head: head
 * @n: element
 * Return: new_head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_head;
	listint_t *last;

	new_head = malloc(sizeof(listint_t));

	if (new_head != NULL)
	{
		new_head->n = n;

		if (!n || !new_head->n)
		{
			free(new_head);
			return (NULL);
		}

		new_head->next = NULL;

		if (*head == NULL)
		{
			*head = new_head;
			return (new_head);
		}
		last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_head;

		return (new_head);
	}

	return (NULL);
}
