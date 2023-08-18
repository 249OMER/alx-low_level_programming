#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * @size: size of it
 *
 * Return: 0
 *
*/

void print_triangle(void)
{
	int base, hight;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (hight = 1; hight <= size; hight++)
		{
			for (base = 1; base <= hight; base++)
			{

				if ((hight + base) <= size)
					_putchar(' ');

				else
					_puchar('#');
			}
			_putchar('\n');
		}

	}
}
