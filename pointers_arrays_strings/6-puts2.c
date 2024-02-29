#include "main.h"
#include <string.h>
/**
 * puts2 - printing every other character of a string
 *@str: the string im printing
 *Return: void
*/
void puts2(char *str)
{
int a;
int b = 0;

while (str[b] != '\0')
{
	b++;
}
for (a = 0; a < b; a += 2)
{
_putchar(str[a]);
}
_putchar('\n');
}
