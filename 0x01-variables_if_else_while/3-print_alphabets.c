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

	char ca = 'A';
while (c <= 'z')
{
	putchar(c);
	c++;
}

	while (ca <= 'Z')
	{
		putchar(ca);
		ca++;
		putchar('\n');
	}
	return (0);

}

