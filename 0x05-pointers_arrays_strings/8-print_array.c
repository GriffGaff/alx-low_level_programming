#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints array
 * @a: variable
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	while (n-- > 0)
		printf(n == 0 ? "%d" : "%d, ", *a++);
	putchar('\n');
}
