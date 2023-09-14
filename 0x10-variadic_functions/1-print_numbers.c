#include "variadic_functions.h"
/**
 * print_numbers - print integer in sepatator
 * @separator: the string will be print
 * @n:number of integer
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list num;
va_start(num, n);
if (separator != NULL)
separator = "";
for (i = 0; i < n; i++)
{
printf("%d, ", va_arg(num, int));
}
printf("\n");
va_end(num);
}
