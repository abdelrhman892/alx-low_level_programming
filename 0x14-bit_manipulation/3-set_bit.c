#include "main.h"

/**
 * set_bit - sets the bit
 *
 * @n: the number
 * @index: the bit
 *
 * Return: 1 if succes, -1 if felid
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n = 1L << index));
}
