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
int d = 0, q;

while (dest[d])}
{
d++;
}

for (q = 0; src[q] != 0; q++)
	{
	dest[d] = src[q];
	d++;
	}
dest[d] = '\0';
return(dest);
}
