#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 * print_alphabet - Prints the lowercase alphabet followed by a newline.
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
