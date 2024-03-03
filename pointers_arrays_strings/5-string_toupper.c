#include "main.h"
#include <stdio.h>
/**
 * string_toupper - making the lowercases upper
 *@str: the string to upper
 *
 *Return: uppercase
*/
char *string_toupper(char *str)
{
char *ptr = str;
while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - 32;
}
ptr++;
}
return (str);
}
