#include <stdio.h>
#include <unistd.h>
/**
 * main - A cprogramm that prints a line to the standard error
 * return 1 when successful
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
