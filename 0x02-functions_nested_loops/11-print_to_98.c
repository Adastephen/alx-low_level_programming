#include "main.h"

/**
 * print_to_98 - main point
 *
 * @n: integer n to 98
 *
 * Return: always 0 else 1
 */
void print_to_98(int n)
{
	int i;

	for (n = 0; n >= 0; n++)
	{
		for (i = 98; i <= 98; i++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(i);
		}
		_putchar('\n');
	}
}
