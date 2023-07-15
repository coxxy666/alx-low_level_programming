#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Generates a random number and determines if it is positive, negative, or zero.
 * Return: 0 for successful execution.
 */
int main(void)
{
	int n;

	srand(time(0));
       	n = rand() - RAND_MAX / 2;
       	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
