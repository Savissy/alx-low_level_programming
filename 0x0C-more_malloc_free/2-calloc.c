#include <stdlib.h>
#include "main.h"
/**
* *_memset - fills mem0ry with a constant byte
* @s: memory area to be filled
* @b: char to copy
* @n: number of times to copy b
* Return: pointer to  the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
/**
* *_calloc - allocates memory for an array
* @nmemb: number of elements in the array
* @size: size of each element
* Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *s;
if (nmemb == 0 || size == 0)
return (NULL);
s = malloc(size * nmemb);
if (s == NULL)
return (NULL);
_memset(s, 0, nmemb * size);
return (s);
}
