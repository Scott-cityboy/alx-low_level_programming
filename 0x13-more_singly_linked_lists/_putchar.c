#include <unistd.h>

/**
 * _putchar - It writes the char c to stdout.
 * @c: The char to print.
 * Return: On 1 Success.
 * On error, -1 returned, and errno is set approp.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
