#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at a given index
 * @h: head node
 * @idx: index to insert the node
 * @n: the node value
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	if (idx == 0)
		add_dnodeint(&newNode, n);

	while (idx > 1)
	{
		tmp = tmp->next;
		idx --;
	}
	if (tmp->next == NULL)
		add_dnode_end(&newNode, n);
	newNode->n = n;
	newNode->prev = tmp;
	newNode->next = tmp->next;
	tmp->next->prev = newNode;
	tmp->next = newNode;
	return (*h);
}
