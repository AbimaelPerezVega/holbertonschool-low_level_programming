#include "main.h"
/**
 *leet - encodes a string into 1337
 *@l: string to be encoded
 *Return: back to s
*/
char *leet(char *l)
{
int c, d;
char cs[] = "aAeEoOtTlL";
char ds[] = "4433007711";

for (c = 0; l[c] != '\0'; c++)
{
for (d = 0; d < 10; d++)
{
if (l[c] == cs[d])
{
l[c] = ds[d];
}
}
}
return (l);
}
