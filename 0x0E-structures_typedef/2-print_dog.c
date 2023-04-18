#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - Prints name, age and owner if not null.
 * @d: is pointer to the struct dog.
**/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("Name: (nil)\n", (d->name) ? d->name : "%s\n");
		printf("Age: (nil)\n", (d->age) ? d->age : "%f\n");
		printf("Owner: (nil)\n", (d->owner) ? d->owner : "%s\n");
	}
}
