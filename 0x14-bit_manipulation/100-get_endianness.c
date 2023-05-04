#include "main.h"

/**
 * get_endianness - It checks if machine is little or big endian.
 * Return: big 0, little 1.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

