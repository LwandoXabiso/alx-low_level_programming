#include "main.h"

/**
 * get_endianness - function that returns the endianness of the system
 * Return: 0 if the endian if big 1 if it is small
 */

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
