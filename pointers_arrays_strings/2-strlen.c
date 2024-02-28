#include "main.h"
#include <stdio.h>
/**
 * _strlen - making a function of the length of a string
 *@s: i actually dont know
 *Return: length of the string
*/
int _strlen(char *s)
{
size_t length = 0;
while (*s++)
length++;
return (length);
}
