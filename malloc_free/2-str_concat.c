#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *str_concat - concatenates two string o any size
 *@s1: the first string
 *@s2: the second string
 *
 *Return: both strings
 *
*/
char *str_concat(char *s1, char *s2)
{
int a = 0, e = 0, i = 0, o = 0;
char *s;

if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

while (s1[a])
	a++;

while (s2[e])
	e++;

o = a + e;
s = malloc((sizeof(char) * o) +1);

if (s == NULL)
	return (NULL);

e = 0;

while (a < o)
{
if (i <= a)
	s[i] = s1[i];

if (i >= a)
{
s[a] = s2[e];
e++;
}
i++;
}
s[a] = '\0';
return (s);
}
