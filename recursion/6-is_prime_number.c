#include "main.h"
#include <stdio.h>
int check_prime(int n, int i);

/**
 * is_prime_number - searching for the prime numbers
 *@n: the number being checked
 *
 *Return: value
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return check_prime(n, 2);
}

/**
 * check_prime - check if number is prime
 *@n: the number
 *@i: the iteration times
 *Return: 1 for prime or 0 if not
*/
int check_prime(int n, int i)
{
if (i * i > n)
	return (1);
if (n % i == 0)
	return (0);
return (check_prime(n, i + 1));
}
