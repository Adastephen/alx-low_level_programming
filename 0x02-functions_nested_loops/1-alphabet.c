#include "main.h"

/**
 * main- Entry pount
 *
 * Description: function for print_alphabet in lower case,
 * print_alphabet followed by a new line
 * Return: always 0 (Success)
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
		_putchar(alphabet);
		}

	_putchar('\n');
}
