#include "main.h"

/**
 * _strpbk - Entry point
 * @s: input
 * @accept: input
 * Return: Alway 0 (success)
 */

char *_strpbk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
