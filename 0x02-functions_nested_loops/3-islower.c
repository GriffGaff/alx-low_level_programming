#include "main.h"
/**
 * _islower - function
 * @c: character to be checked
 * Return: returns 1 if lowercase, returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}