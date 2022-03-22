#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - delete the head of the node
 * @head: head of the node
 * Return: the new head
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (head == NULL || *head == NULL)
		return (0);

	temp = (*head);
	value = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (value);
}
