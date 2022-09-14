#include "main.h"
/**
 * print_alphabet_x10- function that prints alphabets x10
 * Return: passes output
 */
void print_alphabet_x10(void)
{
	int count = 0;

	char lcase;

	while (count++ <= 9)
	{
		for (lcase = 'a'; lcase <= 'z'; lcase++)
		{
			_putchar(lcase);
		}
		_putchar('\n');
	}

}
