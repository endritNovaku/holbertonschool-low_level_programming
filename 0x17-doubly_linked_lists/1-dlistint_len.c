#include "lists.h"
/**
 * dlistint_len - finds the numbers of elements in a linked list
 * @h: head node
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
