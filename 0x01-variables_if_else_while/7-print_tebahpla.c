#include <stdio.h>

/**
 * main - entry point
 * Description: Prints the alphabet reverse.
 * Return: Always 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
