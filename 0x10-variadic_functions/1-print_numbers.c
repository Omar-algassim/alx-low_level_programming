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

if (separator != NULL)
va_start(num, n);
for (i = 0; i <= 0; i++)
{
printf("%d, ", va_arg(num, int));
if (i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(num);
}
