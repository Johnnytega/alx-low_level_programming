#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - Copy the string pointed to by pointer 'src'
 * to the buffer pointed to by 'dest'
 * @dest: char type string
 * @src: char type string
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + 1);
	}
	dest[i] = '\0';
	return (dest);
}
