#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of character and initializes with
* a specific character
* @c: character to be used for initialization
* @size: ssiize of array to be created
* Return: pointer to array,
* NULL if fails
*/
char *create_array(unsigned int size, char c)
{
int i = 0;
char *str = NULL;
str = malloc(size * sizeof(char));
while (i < size)
{
str[i] = c;
i++;
}
if (size == 0)
{
return (NULL);
}
return (str);
}
