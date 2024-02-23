#include "main.h"
/**
 *_abs - compute the absolute value of an integer
 *@c: integer to compute the absolute value of
 *
 *Return: Absolute value of c
*/
int _abs(int c)
{

if (c < 0)
{
int abs_val;

abs_val = c * -1;
return (abs_val);
}
return (c);
}
