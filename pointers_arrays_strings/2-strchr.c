#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character
 *@s: searching the string
 *@c: the location
 *Return: null
 *
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
	return (s);
s++;
}
return (NULL);
}
