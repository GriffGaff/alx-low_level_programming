#include "main.h"
/**
 *print_last_digit - function that prints the last digit of a number
 *
 * @n: last digit result
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int lastdigi;

	lastdigi = (n % 10);
	if (lastdigi < 0)
	{
		lastdigi = (-1 * lastdigi);
	}
	_putchar(lastdigi + '0');
	return (lastdigi);
}
