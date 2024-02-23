#include "main.h"
/**
 * _isalpha - checks alphabetic character
 *@c: check characters
 *Return: 1 for letter, lowercase or uppercase or 0 for anything else
*/
int _isalpha(int c)
{

	for ((c >= 65 && c <= 90) || (c = 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}

