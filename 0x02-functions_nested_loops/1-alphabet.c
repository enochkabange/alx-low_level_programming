#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 * print_alphabet - Prints the lowercase alphabet followed by a newline.
 * Return: Always 0 (Success)
 */

void print_alphabet(void) /* print_alphabet - Prints the lowercase alphabet followed by a newline.*/
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
