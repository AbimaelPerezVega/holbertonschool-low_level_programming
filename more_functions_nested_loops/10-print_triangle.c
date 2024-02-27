#include "main.h"
/**
 * print_triangle - making a triangle
 *@size: the size of a left triangle
 *Return: Always 0
*/
void print_triangle(int size)
{
int k, g, z;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (k = 0; k < size; k++)
{
for (g = size - k; g > 1; g--)
{
_putchar(32);
}
for (z = 0; z <= k; z++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
