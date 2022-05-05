#include "lists.h"
/**
 * add_dnodeint_end - add a node at the end of the list
 * @head: head node
 * @n: value
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode =  malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *head;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newNode;
	newNode->prev = tmp;

	return (newNode);
}
