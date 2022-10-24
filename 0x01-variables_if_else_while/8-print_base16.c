#include <stdio.h>

/**
 * main - Write a program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	int a = '0';
	int b = 'a';

	for (; a <= '9'; a++)
	{
		putchar(a);
	}

	for (; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
