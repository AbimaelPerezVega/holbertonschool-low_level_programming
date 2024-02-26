#include "main.h"
/**
 * print_line - making the line
 *@n: making line
 *Return: void
*/
void print_line(int n)
{
int u;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (u = 0; u < n; u++)
{
_putchar('_');
}
_putchar('\n');
}
}
