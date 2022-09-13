#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Return: passes output
 */
int main(void)
{
	int n = '0';
	char alpha = 'a';

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (alpha = 'a'; alpha < 'g'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
