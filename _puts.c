#include "main.h"
/**
 * _puts - prints a string with newline
 * @str: the string to print
 *
 * Return: void
 *
 */
int _puts(char *str)
{
	char *a =str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(int c)
{
