#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - print list
 * @h: list
 * Return: 0
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if(h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
			count++;
		}
		count++;
		h = h->next;
	}

	return (count);
}
