#include "main.h"
#include "stdlib.h"
/**
 *_strdup - duplicate the string
 *@str: the string
 *
 *Return: null
*/
char *_strdup(char *str)
{
int o = 0, y = 1;
char *s;

if (str == NULL)
	return (NULL);

while (str[y])
{
y++;
}
s = malloc((sizeof(char) * y) + 1);

if (s == NULL)
	return (NULL);

while (o < y)
{
	s[o] = str[o];
	o++;
}
s[o] = '\0';
return (s);
}
