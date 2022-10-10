#include "main.h"

/**
 * print_number - main function that print the number from 0 to 9
 * followed by a new line
 * Return: Always 0
 */
void print_numbers(void)
{
	int ch = '0';

	for (; ch <= '9'; ch++)
	{
		_putchar(ch);
		_putchar('\n');
	}
}
