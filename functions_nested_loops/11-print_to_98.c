#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Print numbers
 * @n: The number to start printing from
 * Return: Always 0
*/
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf("%d", n);
}
else
{
printf("%d, ", n);
}
}
}
else
{
for (; n >= 98; n--)
{
if (n == 98)
{
printf("%d", n);
}
else
{
printf("%d, ", n);
}
}
}
print("\n");
}
