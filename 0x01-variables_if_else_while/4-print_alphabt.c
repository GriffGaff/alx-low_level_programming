#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Return: passes output
 */
int main(void)
{
	char lcase = 'a';

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		if (lcase != 'q' && lcase != 'e')
			putchar(lcase);
	}
	putchar('\n');
	return (0);
}
