#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Return: passes output
 */
int main(void)
{
	char lcase = 'z';

	for (lcase = 'z'; lcase >= 'a'; lcase--)
		putchar(lcase);
	putchar('\n');
	return (0);
}
