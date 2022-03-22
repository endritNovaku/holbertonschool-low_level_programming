#include "lists.h"
#include <stdio.h>

/*
 * print_listint - print list
 * @h: list elements
 * Return: h
 */
size_t print_listint(const listint_t *h)
{
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (0);
}

