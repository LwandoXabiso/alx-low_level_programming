#include "main.h"

/**
 * set_bit - function that sets the bit at the index
 * @n: the number to index
 * @index: the bit to be set
 * Return: returns 1 on success, -1 on erro
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
