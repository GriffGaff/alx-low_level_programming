#include "main.h"
/**
 * print_alphabet - function that prints alphabets
 * Return: passes output
 */
void print_alphabet(void)
{
	char lcase = 'a';

	for (lcase = 'a'; lcase <= 'z'; lcase++)
		_putchar(lcase);
	_putchar('\n');
}
