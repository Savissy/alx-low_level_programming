#include <stdio.h>
#include "lists.h"

/**
* list_len - returns the number of elements in a linked list
* @h: pointer to structure
* Return: returns number of elements in linked list
*/
size_t list_len(const list_t *h)
{
const list_t *pointer;
unsigned int i;
pointer = h;
for (i = 0; pointer; i++)
{
pointer = pointer->next;
}
return (i);
}
