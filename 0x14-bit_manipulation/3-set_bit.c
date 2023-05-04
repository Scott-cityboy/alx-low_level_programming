#include "main.h"

/**
 * set_bit - It sets bit at given index to 1.
 * @n: A pointer to number to change.
 * @index: An index of bit to set 1.
 * Return: success 1, failure -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

