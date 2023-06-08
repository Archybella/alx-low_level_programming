#include <unistd.h>

/**
 * _putchar - will write char c to stdout
 * @c: char to be printed
 * Return: 1 if successful
 * -1 is returned on error, and errno is set appropriately.
 */

int _putchar(char c)

{

		return (write(1, &c, 1));

}
