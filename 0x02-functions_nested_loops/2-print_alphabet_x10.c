#include "main.h"

/**
 * print_alphabet_x10 - printing alphabet 10 times using putchar
 *
 * Description : got non to say
*/

void print_alphabet_x10(void)
{
	int c, n;

	for (n = 0; n < 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
