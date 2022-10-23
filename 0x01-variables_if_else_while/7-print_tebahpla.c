#include <stdio.h>

/**
 * main - Write a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 'z';

	for (; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
}
