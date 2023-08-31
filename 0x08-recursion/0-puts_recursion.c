#include "main.h"

/**
 * _puts_recursion - function
 *
 * @s: input
 *
 * Return: viod
 *
*/

void _puts_recursion(char *s)
{
	if (s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_Putchar(*S);
		_puts_recursion(s + 1);
	}
}
