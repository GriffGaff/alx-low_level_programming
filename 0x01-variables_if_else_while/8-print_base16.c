#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Return: passes output
 */
int main(void)
{
	int n = 0;
	char alpha = 'A';

	for (n = 0; n < 10; n++)
		putchar(n);
	for (alpha = 'A'; alpha < 'G'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
