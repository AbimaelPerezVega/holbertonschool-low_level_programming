#include <stdio.h>
/**
 * main - entry point of the program
 *@argc: the number of command-line
 *@argv: an arra containing the command-line
 *Return: Always 0
*/
int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
