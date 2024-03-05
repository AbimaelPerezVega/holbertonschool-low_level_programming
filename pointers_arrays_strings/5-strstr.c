#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 *@haystack: string to search
 *@needle: substring to locate
 *Return: null
 *
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *temp_haystack = haystack;
char *temp_needle = needle;

while (*temp_needle != '\0' && temp_haystack == *temp_needle)
{
temp_haystack++;
temp_needle++;
}
if (*temp_needle == '\0')
{
return haystack;
}
haystack++;
}
return (NULL);
}
