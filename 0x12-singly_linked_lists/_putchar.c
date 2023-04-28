#include <unistd.h>

/**
 * _putchar - write character c to stdout.
 * @c: char to print
 * Return: On 1 Success.
 * On error, returned is -1, errno is set appropriate.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
