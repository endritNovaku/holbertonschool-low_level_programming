#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print the dog properties
 * @d: dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
