#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 * print_alphabet - prints the alphabet
 * Return: Always 0 (Success)
 */
/* print_alphabet - prints the alphabet */
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
