#include "main.h"
/**
 * _strchr - locates a character
 *@s: searching the string
 *@c: the location
 *Return: null
 *
*/
char *_strchr(char *s, char c)
{
	do {
if (*s == c)
	return (s);
	} while (*s++);

return ('\0');
}
