#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * discription : print last digital
 * Return: 0 for successful execution
 */
int main(void)
{
	int n;
	int lad;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lad = n % 10;
	if (lad > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lad);
	}
	else if (lad == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lad);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lad);
	}
	return (0);
}
