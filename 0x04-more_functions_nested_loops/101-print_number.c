#include "main.h"

/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 */
void print_number(int n)
{
	int n1 = n;

	if (n < 0)
	{
		n = -n;
		_putchar('_');

	}
	if (n / 10)
	{
		print_number(n / 10)
	}
	_putchar(n % 10 + '0')
}
