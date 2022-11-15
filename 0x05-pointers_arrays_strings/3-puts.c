#include "main.h"

/**
 * _puts - main entry
 *
 * @str: function that print the string
 * Return: Always 0
 */
void _puts(char *str)
{
	int a = 0;
	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	putchar('\n');
}
