#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * string_toupper - making the lowercases upper
 *@s: the string to upper
 *
 *Return: 0
*/
char *string_toupper(char *)
{
char * s = str;

while (*s)
{
*s = (*s > 'a' && *s <= 'z') ? *s-32 : *s;
s++;
}
return (0);
}
