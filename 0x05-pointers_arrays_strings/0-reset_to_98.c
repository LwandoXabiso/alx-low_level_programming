#include "main.h"

/**
 *reset_to_98 -> a function to update the reference of a pointer
 *@n: pointer to n to be updated
 */

void reset_to_98(int *n)
{
	int x = 1;
	int *n = &x;
	*n = 98;
}
