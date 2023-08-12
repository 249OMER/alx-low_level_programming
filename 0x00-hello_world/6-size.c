#include<stdio>
/**
 * main - Entry point
 *
 * Description: using a sizeof to print the size of various types.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	printf("size of a char: %u bytes(s)\n", sizeof(char));
	printf("size of a int: %u bytes(s)\n", sizeof(int));
	printf("size of a long int: %u bytes(s)\n", sizeof(long int));
	printf("size of a long long it: %u bytes(s)\n", sizeof(long long int));
	printf("size of a float: %u bytes(s)\n", sizeof(float));
	return (0);
}
