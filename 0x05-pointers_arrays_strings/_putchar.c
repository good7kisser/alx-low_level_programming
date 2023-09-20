#include <unisted.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is setappropriately.
 */
int _putcar(char c)
{
	return (write(1, &c, 1));
}
