#include "main.h"
/**
 *more_numbers - adding 0 to 14 ten times
 *
 *Return: void
 *
*/
void more_numbers(void)
{
int n, c;
for (n = 0; n < 10; n++)
{
for (c = '0'; c <= "9"; c++)
{
_putchar(c);
}
for (c = '0'; c <= '4'; c++)
{
_putchar('1');
_putchar(c);
}
_putchar('\n');
}
}
