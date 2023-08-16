#include "main.h"

/**
 * print_to_98 - print number till 98
 *
 * @n: input
 *
*/

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%ld, ", count);

	else
		for (count = n; count < 98; count++)
			printf("%ld, ", count);
	printf("98\n");
}
