#include "lists.h"
/**
 * add_dnodeint - add a node at the beginning of the list
 * @head: head node
 * @n: value of the node
 * Return:the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode =  malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}
	*head = newNode;

	return (newNode);
}
