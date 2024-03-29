#include "main.h"
/**
 *_strcmp - comparing the pointers
 *@s1: A pointer to the first string being compared
 *@s2: A pointer to the second string to be compared
 *Return: If str1 < str2, the negative difference unmatched characters
 *If str1 == str2, 0.
 *If str1 > str2, the positive deifference of the first characters
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
