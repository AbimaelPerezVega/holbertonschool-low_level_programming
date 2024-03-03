#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * string_toupper - making the lowercases upper
 *@ch: the string to upper
 *
 *Return: 0
*/
char *string_toupper(char *ch)
{
int b = 0;

while (str[b])
{
ch = str[b];
_putchar(toupper(ch));
b++;
}
return (0);
}
