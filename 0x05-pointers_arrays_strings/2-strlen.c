#include "main.h"

/**
 * _strlen - main entry
 *
 * Description: stringlenght
 * Return:always 0
 */
int _strlen(char *s)
{
	int a;
	a = 0;
	while (s[a])
	{
	a++;
	}
	return (a);
}
