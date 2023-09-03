#include "main.h"

/**
 * _puts - function
 *
 * @s: input
 *
 * Return: nono
 *
*/

void _puts(char *s)
{
	while (*s != '\0')
		{
			_putchar(*s + 0);
			s++;
		}
	_putchar('\0');
}
