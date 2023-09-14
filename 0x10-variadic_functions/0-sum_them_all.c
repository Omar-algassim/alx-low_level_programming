#include "variadic_functions.h"

/**
 * sum_them_all - sum the numbers in var
 * @n:the number of integer
 * Return: the value of sum 
*/
int sum_them_all(const unsigned int n, ...)
{
    va_list num;
    int i, sum;

    va_start(num, n);
sum = 0; 
  for ( i = 0; i < n; i++)
        sum += va_arg (num, int);
        
va_end (num);
return (num);
}
