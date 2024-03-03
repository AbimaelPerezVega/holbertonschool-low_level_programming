#include "main.h"
/**
 *_strncpy - copies the number
 *@dest: the destination
 *@src: the source
 *@n: the number of bytes to copy from the source
 *Return: returning to dest
*/
char *_strncpy(char *dest, char *src, int n)

{

	int index = 0, slen = 0;

	while (src[index++])
		slen++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = slen; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
