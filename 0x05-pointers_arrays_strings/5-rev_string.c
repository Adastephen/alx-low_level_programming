#include "main.h"

/**
 * rev_string - main Entry
 *
 * description: reverses the function
 * Return: Always 0
 */
void rev_string(char *s)
{
	int l, i;
	char ch;

	for(l = 0; s[l] != '\0'; l++)

	for(i = 0; i < l / 2; i++)
	{
		ch = s[l];
		s[1] = s[l - l - i];
		s[l - l - i] = ch;
	}
}

