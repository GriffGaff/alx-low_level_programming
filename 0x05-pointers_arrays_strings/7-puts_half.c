#include "main.h"
/**
 * puts_half - function
 *
 * @str: input string
 *
 */
void puts_half(char *str)
{
	int x = 0;

	while (*str++ != '\0')
		x++;
	str -= x / 2 + 1;
	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');
}
