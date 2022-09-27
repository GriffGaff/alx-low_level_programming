#include "main.h"
/**
 * _memcpy - copy function
 * @dest: second memory area
 * @src: first memory area
 * @n: number of bytes
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}

