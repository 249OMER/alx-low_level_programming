#include "main.h"

/**
 * _strncpy - function of
 *
 * Description: coping
 *
 * @dest: destnation
 * @src:source
 * @n:ammount of times
 *
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\n';
		i++;
	}

	return (dest);
}
