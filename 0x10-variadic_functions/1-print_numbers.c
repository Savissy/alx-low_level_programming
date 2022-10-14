#include "variadic_functions.h"

/**
* print_numbers - prints numbers given as parameters
* @separator: string to be printed between numbers
* @n: number of integers passed to the functions
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ag;
va_start(ag, n);
for (i = 0; i < n; i++)
{
if (!separator)
printf("%d", va_arg(ag, int));
else if (separator && i == (n - 1))
printf("%d", va_arg(ag, int));
else
printf("%d%s", va_arg(ag, int), separator);
}
va_end(ag);
printf("\n");
}
