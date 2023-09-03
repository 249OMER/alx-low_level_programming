#include "main.h"

/**
 * _strchr - main function
 *
 * @s: variable 1
 * @c: variable 2
 *
 * Return: pointer
 *
 */

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] > '\0'; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}
	return ('\0');
}
