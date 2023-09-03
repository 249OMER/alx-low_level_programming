#include "main.h"

/**
 * _strcpy
 *
 * @dest: input
 * @src: input brdo
 *
 * Return: dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
