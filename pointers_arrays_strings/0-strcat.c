#include "main.h"
/**
 *_strcat - concatenates two string
 *@dest: destination of the string
 *@src: source of the string
 *Return: a pointer to the result
*/
char *_strcat(char *dest, char *src)
{
int d;
int q;

while (dest[d] != '\0', d++)

	while (src[q] != '\0')
	{
	dest[d] = src[q];
	d++;
	q++;
	}
dest[d] = '\0'
	return(dest);
}
