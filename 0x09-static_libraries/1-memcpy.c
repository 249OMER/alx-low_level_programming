#include "main.h"

/**
 * _memcpy - main function
 *
 * @src: variable 1
 * @dest: variable 2
 * @n: variable 3
 *
 * Return: dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
