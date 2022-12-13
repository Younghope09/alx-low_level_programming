#include <unistd.h>
#include <main.h>
/**
 * _putchar.c - write the character c to stdout
 * @c: the character to print
 *
 * Return: 0 success 1.
 * on error, -1 is returned, nd error is sent appropriately.
 */
int _putchar(char c)
{
	return (write(1, $c, 1));
}
