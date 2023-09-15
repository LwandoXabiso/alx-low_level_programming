#include "main.h"

/**
 * more_numbers -> printing more numbers
 */

void more_numbers(void)
{
	int x = 0, y = 14, i;

	for (i = 1; i <= 10; i++)
	{
		while (x <= y)
		{
			_putchar(x > 9 ? (x / 10) + '0': start + '0');

			if (x > 9)
				_putchar((start % 10) + '0');
			x++;
		}
		x = 0;
		_putchar('\n');
	}
}
