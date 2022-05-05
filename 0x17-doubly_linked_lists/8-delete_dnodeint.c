#include "lists.h"
/**
 * delete_denodeint_at_index - delete a node at a given index
 * @head: head node
 * @index: the index that the node is goint to be deleted
 * Return: 1 on succeeded, 0 fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmpPrev = *head;
	dlistint_t *tmpNext = (*head)->next;
	dlistint_t *currentTmp = *head;
	unsigned int count = 0;

	if (index == 0)
        {
                tmpNext->next->prev = NULL;
                *head = tmpNext;
                free(currentTmp);
		return (1);
        }
	do {
		currentTmp = currentTmp->next;
                tmpNext = tmpNext->next;
                if (count < index)
                        tmpPrev = tmpPrev->next;
                count++;
	} while (count < index);

	tmpNext = tmpNext->next;
	tmpNext->prev = tmpPrev;
	tmpPrev->next = tmpNext;
	free(currentTmp);
	return (1);
}
