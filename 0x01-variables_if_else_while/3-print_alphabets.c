#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase
 * and then in uppercase
 * followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';
	char uch = 'A';

	for (; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (; uch <= 'Z'; uch++)
	{
		putchar(uch);
	}
	putchar('\n');

	return (0);
}
