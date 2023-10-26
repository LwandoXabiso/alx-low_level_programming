#include "main.h"

/**
 * flip_bits - function that return number of bits that would need
 * to be transform one number to another
 * @n: the first number
 * @m: the second number
 * Return: the umber of bits to flip to convert numbers
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int number = 0;

	while (flip)
	{
		if (flip & 1ul)
			number++;
		flip = flip >> 1;
	}
	return (number);
}
