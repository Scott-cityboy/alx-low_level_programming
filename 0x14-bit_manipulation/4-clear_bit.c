#include "main.h"

/**
 * clear_bit - It sets value of given bit to 0.
 * @n: pointer to number to change.
 * @index: The index of bit to clear.
 * Return: success 1, failure -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
