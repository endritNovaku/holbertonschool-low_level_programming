#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - print all the elements of a dlistint_t
 * @h: head node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
