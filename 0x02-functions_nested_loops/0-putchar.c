#include "stdio.h"
#include "main.h"

/**
 * main - Prints _putchar followed by a new line.
 *
 * Return: 0.
 */
int main(void)
{
	char v[] = "_putchar";
	int i = 0;

	while (v[i] != '\0')
	{
		putchar(v[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
