#include <unistd.h>
#include "main.h"
/**
* main - print numbers in in small letter alphabetically
*
* Description: using the main function
* this program prints " programming can be alphabetical "
* Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
