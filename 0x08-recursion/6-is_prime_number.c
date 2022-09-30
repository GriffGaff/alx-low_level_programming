#include "main.h"
/**
 * findprime - sub function that checks if number is a prime
 * @n: variable 1
 * @i: integer
 * Return: 0 if number is divisible, 1 if else
 */
int findprime(int n, int i)
{
	if (i == n / 2)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (findprime(n, i + 1));
}
/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: If the integer is not prime - 0.
 * If the number is prime - 1.
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 0)
		return (0);
	else if (n >= 2 && n <= 3)
		return (1);
	else
		return (findprime(n, i));
}
