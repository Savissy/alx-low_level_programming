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
char *dup;
unsigned int size;
unsigned int i = 0;
dup = (char *) malloc(size * sizeof(char));
if (str == NULL)
return (NULL);
if (dup == NULL)
return (NULL);
while (i < size)
{
dup[i] = str[i];
i++;
}
return (dup);
}
