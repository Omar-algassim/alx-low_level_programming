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
    printf("NULL\n");

if (d->name != 0)
{
    printf("nil\n");
}
else
{
    printf("name: %s\n", d->name);
}
if (d->age != 0)
{
    printf("nil\n");
}
else
{
    printf("age: %f\n", d->age);
}
if (d->owner != 0)
{
    printf("nil\n");
}
else
{
    printf("owner: %s\n", d->owner);
}
}
}