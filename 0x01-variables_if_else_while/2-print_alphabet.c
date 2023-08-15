#include <stdio.h>

/**
 * main - enert point
 * Description: printing letters form a to z small
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return;

}
