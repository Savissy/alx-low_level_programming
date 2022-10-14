#include "variadic_functions.h"

/**
* print_strings - prints strings
* @separator: separator between strings
* @n: number of arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *s;
va_list ag;
va_start(ag, n);
s = va_arg(ag, char *);
for (i = 0; i < n; i++)
{
if (!separator)
printf("%s", s);
else if (!s)
printf("(nil)");
else if (separator && i == (n - 1))
printf("%s", s);
else
printf("%s%s", s, separator);
}
va_end(ag);
printf("\n");
}
