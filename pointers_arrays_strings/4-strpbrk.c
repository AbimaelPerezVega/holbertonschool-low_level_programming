#include "main.h"
/**
 * _strpbrk - searches the string for bytes
 *@s: the string
 *@accept: bytes being accepted
 *Return: null
 *
*/
char *_strpbrk(char *s, char *accept)
{
const char *p;
while (*s)
{
p = accept;
while (*p)
{
if (*s == *p)
	return (s);
p++;
}
s++;
}
return ('\0');
}
