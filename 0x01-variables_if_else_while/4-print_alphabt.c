#include <stdio.h>

/**
 * main - enery point
 *
 * Description: printing letters without e&q
 *
 * Return: 0 (Success)
 *
*/

int main(void)
{
	char l = 'a';
while l <= 'z'
	{
		if (l == 'e' || l == 'q')
			l++
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
