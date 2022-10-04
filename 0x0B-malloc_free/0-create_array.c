#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of character and initializes with
* a specific character
* @c: character to be used for initialization
* @size: ssiize of array to be created
* Return: pointer to array (success), NULL (Error)
*/
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *str;

str = (char *) malloc(size * sizeof(char));
if (str == NULL)
return (0);
if (size == 0)
return (NULL);
while (i < size)
{
str[i] = c;
i++;
}
str[i] = '\0';
return (str);
}
