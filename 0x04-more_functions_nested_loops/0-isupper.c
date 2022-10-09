#include "main.h"

/**
 * _isupper - main entry
 *
 * @c: check the uppercase
 * Return: 1 else 0
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase >= 'A'; uppercase++)
       	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper)
	return (c >= 'A' && c <= 'Z');
	
}

