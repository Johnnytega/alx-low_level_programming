#include "main.h"

/**
 * Print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 */
void print_alphabet_x10(void)
{
	int c = 0;
	char letter;

	while (c++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
