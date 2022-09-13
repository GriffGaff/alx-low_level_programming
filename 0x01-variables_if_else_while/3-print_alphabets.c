#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Return: passer
 */
int main(void)
{
	char lcase = 'a';
	char ucase = 'A';

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		putchar(lcase);
	}
	for (ucase = 'A'; ucase <= 'Z'; ucase++)
	{
		putchar(ucase);
	}
	putchar('\n');
	return (0);
}
