#include "main.h"

/**
 * print_number - Prints a passed number to stdout
 * @n: This is the number to be printed
 *
 * Return: Null Void
 */
void print_number(int n)
{
	unsigned int m, d, count;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}


	d = m;
	count = 1;

