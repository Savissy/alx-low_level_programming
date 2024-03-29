#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters
* @n: size or number of arguments
* Return: sum of parameters
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ag;
unsigned int i;
int sum = 0;
va_start(ag, n);
for (i = 0; i < n; i++)
{
sum += va_arg(ag, int);
}
va_end(ag);
return (sum);
}
