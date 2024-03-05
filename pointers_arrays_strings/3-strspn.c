#include "main.h"
/**
 * _strspn - gets the length of a prefix
 *@s: the string
 *@accept: the characters
 *Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int f;
char *original_accept = accept;

while (*s != '\0') {
	f = 0;

	while (*accept != '\0') {
		if (*s == *accept) {
			f = 1;
			break;
		}
		accept++;
	}
	if (!f) {
		break;
	}
	count++;
	s++;
	accept = original_accept;
}
return (count);
}
