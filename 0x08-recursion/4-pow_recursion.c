#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * _pow_recursion - function
 * @x: var 1 base number
 * @y: var 2 exponent
 * Return: output
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y));
}
