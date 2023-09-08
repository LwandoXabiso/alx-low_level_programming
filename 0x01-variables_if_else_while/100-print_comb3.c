#include <stdio.h>
/**
 * main - Program that prints all possible different combinations of two digits
 * Return: 0 when successful
 */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (ones = '0'; ones <= '9'; ones++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			if (!((ones == tens) || (tens > ones)))
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
