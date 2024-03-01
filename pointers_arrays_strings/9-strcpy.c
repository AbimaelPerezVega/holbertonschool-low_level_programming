#include "main.h"
/**
 *_strcpy - copying the string pointed by src
 *@dest: destination to copy
 *@src: source to copy
 *Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int t;
for (t = 0; src[t] != '\0'; t++)
{
dest[t] = src[t];
}
dest[t++] = '\0';
return (dest);
}
