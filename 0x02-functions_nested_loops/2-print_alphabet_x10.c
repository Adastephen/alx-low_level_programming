#include "main.h"

/**
 * main- Entry point
 *
 * Description:funtion that print 10times,in lower
 * case, followed by new line
 * Retutn: always 0 (success)
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
		}
	_putchar('\n');
	}

}