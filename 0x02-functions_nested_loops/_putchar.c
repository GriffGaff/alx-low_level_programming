#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: char to print
 * Return: passes output (1) on success
 * On error; return is -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
