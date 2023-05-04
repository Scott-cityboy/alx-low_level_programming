#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: The char to print.
 *
 * Return: 1 on success.
 * On error, -1 is return, errno is set approp.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
