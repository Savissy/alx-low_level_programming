#include <stdio.h>
/**
* main - a function to print its name
* @argc: argc parameter
* @argv: an array of a command listed
* Return: success 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
