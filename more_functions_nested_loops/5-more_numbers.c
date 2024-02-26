#include "main.h"
/**
 *more_numbers - adding 0 to 14 ten times
 *
 *Return: void
 *
*/
void more_numbers(void)
{
int n;
for (n = 0; n < 10; n++)
{
char c;
for (c = "0"; c <= "14"; c++)
{
_putchar(c);
}
if (n != 10)
	_putchar('\n');
}
}
