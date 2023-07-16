#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 * Description: Write a C program that prints
 * Return: Always 1 (Success)
 */

int main(void)
{
	char *mess = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, mess, strlen(mess));
	return (1);
}
