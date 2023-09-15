#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print the dog info
 * @d:pointer to struct dog
 *
 * Return: always 0
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("name: %s\n", d->name);
		else
			printf("name: (nil)\n");
		if (d->age != 0)
			printf("age: %f\n", d->age);
		else
			printf("age: (nil)\n");
		if (d->owner != NULL)
			printf("owner: %s\n", d->owner);
		else
			printf("owner: (nil)\n");
	}
}

