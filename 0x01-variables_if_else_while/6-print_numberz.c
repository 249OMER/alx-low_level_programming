#include <stdio.h>

/**
 * main - entery point
 *
 * Description: printing numbers from 0 to 9
 *
 * Return: 0 (Success)
 *
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
