#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 * Return Always 0
 */
void more_numbers(void)
{
	int j;

	for (j = "0"; j <= "10"; j++)
	{
		int i = '0';

		for (; i <= '14'; i++)
		{
			_putchar(i);
		}
		_putchar(j);
	_putchar('\n');
	}
}
