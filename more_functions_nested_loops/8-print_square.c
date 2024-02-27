#include "main.h"
/**
 * print_square - making a square with hashtags
 *@size: creating a hashtag square
 *Return: empty
*/
void print_square(int size)
{
int q, t;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (q = 0; q < size; q++)
{
for (t = 0; t < size; t++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
