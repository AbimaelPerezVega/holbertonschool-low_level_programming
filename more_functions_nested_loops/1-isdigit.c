#include "main.h"
/**
 * _isdigit - from 0 to 9
 *@c: doing numbers
 *Return: 1 if digit or 0 for everything else
*/
int _isdigit(int c)
{
if ((c >= '0' && c <= '9'))
{
return (1);
}
else
{
return (0);
}
}
