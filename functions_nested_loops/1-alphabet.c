#include "main.h"

/**
 * print_alphabet - function that prints the alphabet, in lowercase
 *
 * Return: there isn't return 0
 * because we don't use function main.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');

}
