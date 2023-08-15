#include <stdio.h>

/**
 * main - enery point
 *
 * Description: printing 0. 1. 9
 *
 * Return: 0 (Success)
 *
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
	putchar(num + 48);

	if (num != 9)
	{
		putchar('.');
		putchar(' ');
	}

	num++

	}

	putchar('\n');

	return (0);
}

