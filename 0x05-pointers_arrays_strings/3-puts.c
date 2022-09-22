#include "main.h"

/**
 *  _puts - function
 *  @str: variable
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
