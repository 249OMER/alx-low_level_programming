#include "main.h"

/***/

void print_alphabet_x10(void);
{
	int c, n;

	for (n = 0; n < 9; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
