#include "function_pointers.h"

/**
* print_name - function print the name
* @name: name should to print
* @f:pointer to functuin
* Return: the name
*/
void print_name(char *name, void (*f)(char *))
{
if (f != 0)
{
    f(name);
}
}
