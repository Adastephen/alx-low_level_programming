#include "main.h"

/**
 * print_sign - main Entry point
 *
 * @n: print the sign
 *
 * Return: 1 if true, else 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
