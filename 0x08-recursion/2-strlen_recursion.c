#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - Main function
 * @s: string var
 * Return: 0;
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
