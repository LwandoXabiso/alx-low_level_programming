#include <unistd.h>
/**
 * _putchar - write the character c to stdio
 * 0C! The character to print
 * Return: 1 on success
 * On error, -1 is returned, and error is set appropriately
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
