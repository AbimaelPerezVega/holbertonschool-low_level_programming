#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - print name plz
 *@name: name to print
 *@f: function pointer
 *
 *Return: void/NUll
 *
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
	f(name);
}
