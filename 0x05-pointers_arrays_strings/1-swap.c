#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 *
 * @a: is a variable
 * @b: is a variable
 */

void swap_int(int *a, int *b)
{
	int s = *a;

	*a = *b;
	*b = s;
}