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
if (d == 0)
{
    printf("NULL");
}
if (d->name == 0)
{
    printf("nil");
}
else
{
    printf("name: %s", d->name);
}
if (d->age == 0)
{
    printf("nil");
}
else
{
    printf("age: %f", d->age);
}
if (d->owner == 0)
{
    printf("nil");
}
else
{
    printf("owner: %s", d->owner);
}

}