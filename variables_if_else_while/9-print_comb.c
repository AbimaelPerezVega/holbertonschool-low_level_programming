#include <stdio.h>
/**
 * main - finale
 *
 * Return: 0
*/
int main(void)
{
int v;

for (v = '0'; v <= '9'; v++)
{
putchar(v);
if (v != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
