#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase
 * followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
		putchar('\n');
	return (0);
}
