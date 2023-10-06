#include <stdio.h>

/**
 * main - Output all single digits of base 10 starting from 0,
 *        only using putchar and with no char variables.
 *
 * Return: 0 on success.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
