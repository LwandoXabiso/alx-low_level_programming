#include "main.h"

/**
 * clear_bit - function that clears the bit at the index
 * @n: the number to index
 * @index: the bit to clear
 * Return: 1 on success or -1 or error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
