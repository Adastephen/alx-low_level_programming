#include "main.h"

/**
 * print_number - main function that print the number from 0 to 9
 *
 * @a: int a print 0 to 9
 * Return: Always 0
 */
void print_numbers(void)
{
	char ch = '0';

	for (; ch <= '9'; ch++)
	{
		_putchar(ch);
		_putchar(\n);
	}
}
