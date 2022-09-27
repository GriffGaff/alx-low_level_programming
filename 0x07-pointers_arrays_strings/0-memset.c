#include "main.h"
/**
 * _memset - function that fills memory
 * @n: number of bytes
 * @s: pointer
 * @b: constant byte
 * Return: returns 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
