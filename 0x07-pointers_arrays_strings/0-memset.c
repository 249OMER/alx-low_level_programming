#include "main.h"

/**
 * _memset - main function
 *
 * @s: variable 1
 * @b: variable 2
 * @n: variable 3
 *
 * Return: s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}

	return (s);
}
