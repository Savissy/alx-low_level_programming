#include <stdlib.h>
#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated memory
* and contains a copy of the string given as parameter
* @str: pointer to return
* Return: pointer (success), NULL (Error)
*/
char *_strdup(char *str)
{
unsigned int size;
unsigned int i = 0;
str = (char *) malloc(size * sizeof(char));
if (str == NULL)
return (NULL);
while (i < size)
{
str[i] = *str;
i++;
*str++;
}
str[i] = '\0';
return (str);
free(str);
}
