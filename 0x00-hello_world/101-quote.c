#include <unistd.h>
#include <string.h>

/**
 * mai - Entry point
 *
 * Return: Always 1 (Success)
 */

int main() 
{
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(STDERR_FILENO, message, strlen(message));
    return 1;
}
