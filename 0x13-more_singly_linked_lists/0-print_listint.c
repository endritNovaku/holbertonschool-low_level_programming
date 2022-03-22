#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print list
 * @h: list elements
 * Return: h
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (!h->n)
			printf("[0] (lil)\n");
		else
			printf("%i\n",h->n);
		count++;
		h = h->next;
	}
	return (count);
}
