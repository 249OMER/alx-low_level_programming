#include "main.h"

/**
 * print_square - print squares
 *
 * @size: the size of it
 *
 * Return: 0
 *
*/

void print_square(int size)
{
	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= row; col++)
			_putchar('#');
		_putchar('\n');
	}
}
