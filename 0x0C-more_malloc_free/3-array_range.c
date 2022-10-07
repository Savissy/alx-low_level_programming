#include <stdlib.h>
#include "main.h"
/**
* *array_range - creates an array of integers
* @min: minimum range of values stored
* @max: maximum range of values stored
* Return: pointer to a new array
*/
int *array_range(int min, int max)
{
int *s;
int i, size;
i = 0;
if (min > max)
return (NULL);
size = max - min + 1;
s = malloc(sizeof(int) * size);
if (s == NULL)
return (NULL);
while (i < size && min <= max)
{
s[i] = min;
s++;
min++;
}
return (s);
}
