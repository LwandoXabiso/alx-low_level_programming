#include "main.h"

/**
 * get_bit - function to get the bit at the index
 * @n: the  number to index
 * @index: the bit to get
 * Return: returns the bit state or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
