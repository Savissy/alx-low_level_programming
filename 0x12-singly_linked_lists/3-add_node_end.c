#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* _strlen - get the string's length
* @str: string to get length of
* Return: string's length
*/
unsigned int _strlen(char *str)
{
int i = 0;
while (*str)
{
str++;
i++;
}
return (i);
}

/**
* add_node_end - add node at the end of a list
* @head: double pointer
* @str: string to add new node
* Return: nodes to the end
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode, *x;
if (str == NULL)
return (NULL);
newnode = malloc(sizeof(list_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->str = strdup(str);
if (newnode->str == NULL)
{
free(newnode);
return (NULL);
}
newnode->len = _strlen(newnode->str);
newnode->next = NULL;
if (*head == NULL)
{
*head = newnode;
return (newnode);
}
x = *head;
while (x->next)
x = x->next;
x->next = newnode;
return (newnode);
}
