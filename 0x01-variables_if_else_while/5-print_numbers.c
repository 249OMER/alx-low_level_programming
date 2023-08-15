#include <stdio.h>

/**
 * main - enery point
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
		printf("%i", num);
			num++;
	}
	printf("\n");
	return (0);
}
