#include <stdio.h>

/**
 * main - enery point
 *
 * Description: printing letters reversed
 *
 * Return: 0 (Success)
 *
*/

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);

}

