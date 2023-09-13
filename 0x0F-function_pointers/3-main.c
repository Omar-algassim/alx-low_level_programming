#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * calc - function that test the program
 * @operation: the operation you have to use
 * @num1: number one to use
 * @num2: number 2 to use
 * Return: the value of operation 
*/
int main (int argc, char **argv)
{
 int (*operator)(int, int), a, b;

if (argc != 4)
printf("Error \n"), exit (98);

a = atoi(argv[1]);
b = atoi(argv[3]);

operator = get_op_func(argv[2]);

if (!operator)
printf("Eroor \n"), exit (99);

if (b == 0 && (*argv[2] == '/' || *argv[2] == '%'))
printf("Eroor\n"), exit (100);

printf("%d\n", operator(a, b));
return (0);
}
