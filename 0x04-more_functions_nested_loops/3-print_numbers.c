#include "main.h"
/**
*print_numbers - function that print all numbers from
*0 to 9
*_putchar - writes the character c to stdout
*Return: returns nothing
*/
void print_numbers(void);
int _putchar(char c);
{
int number = 48;
for (number = 48; number < 58; number++)
{
_putchar(number);
}
_putchar(10);
}
