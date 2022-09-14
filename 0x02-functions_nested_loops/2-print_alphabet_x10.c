#include "main.h"
#include <stdio.h>
/**
* main - prints alphabets in 10 times
* print_alphabet_x10 - prints 10 times the alphabet, in lower case
* followed by a new line
* Return: Always 0 (success)
*/
int main(void)
{
void print_alphabet_x10(void);
char ch;
int i;
i = 0;
while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
i++;
return (0);
}
}
