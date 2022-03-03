#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: int
 * @size: size of array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *alocate;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	alocate = malloc(nmemb * size);
	if (alocate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		alocate[i] = 0;
	}

	return (alocate);
}
