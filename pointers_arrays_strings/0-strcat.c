#include "main.h"
#include <stdio.h>
/**
 *_strcat - concatenates two string
 *@dest: destination of the string
 *@src: source of the string
 *Return: a pointer to the result
*/
char *_strcat(char *dest, char *src)
{
int dlen = 0, q;

while (dest[dlen])}
{
dlen++;
}

for (q = 0; src[q] != 0; q++)
{
dest[dlen] = src[q];
dlen++;
}
dest[dlen] = '\0';
return (dest);
}
