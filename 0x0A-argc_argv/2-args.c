#include <stdio.h>
/**
* main - prints all arguments it recieves
* @argc: argc parameter
* @argv: an array of a command listed
* Return: 0  for success
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
