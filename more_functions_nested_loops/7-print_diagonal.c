#include "main.h"
/**
 * print_diagonal - making the diagonal line
 *@n: number of times creating diagonal line
 *Return: empty
*/
void print_diagonal(int n)
{
int d, s;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (d = 0; d < n; d++)
{
for (s = 0; s < d; s++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
