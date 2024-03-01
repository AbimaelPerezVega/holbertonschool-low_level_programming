#include "main.h"
/**
 * puts_half - printing half the string
 *@str: only the second half
 *Return: void
*/
void puts_half(char *str)
{
int p = 0;
int c;

while (str[p] != '\0')
{
p++;
}
if (p % 2 == 1)
{
c = (p - 1) / 2;
c += 1;
}
else
{
c = p / 2;
}
for (; c < p; c++)
{
_putchar(str[c]);
}
_putchar('\n');
}
