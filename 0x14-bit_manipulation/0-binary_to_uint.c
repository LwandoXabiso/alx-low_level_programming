#include "main.h"

/**
 * binary_to_uint - function to convert a binary number string to un int
 * @b: the binary number as a string
 * Return: return the unsigned in from function b
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		len = len * 2 + (*b++ - '0');
	}
	return (len);
}
