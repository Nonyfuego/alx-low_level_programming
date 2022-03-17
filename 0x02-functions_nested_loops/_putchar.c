#include <unistd.h>

/*
 * _putchar - writes the character a to stdout
 * @a: means the character to print
 *
 * Return: on success 1.
 * on error, -1 and errno is set appropriately
 */
int _putchar (char a)
{
	return (write(1, &a, 1));
}
