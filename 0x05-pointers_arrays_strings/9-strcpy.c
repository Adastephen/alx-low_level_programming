#include "main.h"

/**
 * strcpy - main entry
 *
 * description: copy file 
 * Return:Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int a;
	int b = 0;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[b] = src[a];
		b++;
	}
	dest[b] = '\0';
	
	return (dest);
}
