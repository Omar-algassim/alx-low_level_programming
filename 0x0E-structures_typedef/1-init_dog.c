#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize a variable
 * @d:pointer to dog
 * @name: name of the dog
 * @age: age of dog
 * @owner:owner of the dog
 * Return: always 0
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != 0)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
