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
if (d != 0)
{
if (d->name == NULL)
	printf("name: (nil)\n");
else
	printf("name: %s\n", d->name);
if (d->age == 0)
	printf("age: (nil)\n");
else
	printf("age: %f\n", d->age);
if (d->owner == NULL)
	printf("owner: (nil)\n");
else
	printf("owner: %s\n", d->owner);
}
}

