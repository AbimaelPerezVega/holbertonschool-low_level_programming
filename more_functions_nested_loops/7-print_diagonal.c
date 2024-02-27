#include "main.h"
/**
 * print_diagonal - making the diagonal line
 *@n: number of times creating diagonal line
 *Return: void
*/
void print_diagonal(int n)
{
int d, space;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (d = 0; d < n; d++)
{
	for (space = 0; space < d; space++)
{
	_putchar(' ');
}
_putchar('\\');
}
_putchar('\n');
}
}
