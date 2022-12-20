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
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
