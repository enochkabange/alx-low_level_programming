#include <stdio.h>
/**
 * main - output all the digit numbers of base 16 in lowercase.
 *
 * Return: 0 on success.
 */
int main(void)
{
	char character;
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	for (character = 'a'; character <= 'f'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
