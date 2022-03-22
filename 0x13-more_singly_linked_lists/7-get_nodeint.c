#include "lists.h"
/**
 *  get_nodeint_at_index - get node at index
 *  @head: head list
 *  @index: index
 *  Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	i = 0;
	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}

	return (head);
}
