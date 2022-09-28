#include "main.h"

/**
 * *_memset - Entry point
 *
 * @n: byte of memory area pointed to by @s
 * @s: with constant byte @b
 * @b: memory area @s
 *
 * Return: pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);

}
