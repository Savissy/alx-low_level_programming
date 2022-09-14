#include <unistd.h>
#include "main.h"
/**
* main - a program to print an array of characters
*
* _putchar - writes the character c to stdout
* @c: the character to print
*
* Return: on success 1
* on Error, -1 is returned, and errno is set appropriately
*/
int main(void)
{
char ch[8] = "_putchar";
int i = 0;
char c;
while (i <= 8)
{
c = ch[i];
_putchar(c);
i++;
}
putchar('\n');
return (0);
}
int _putchar(char c)
{
return (write(1, &c, 1));
}
