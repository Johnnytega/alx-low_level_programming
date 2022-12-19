#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers
 * @a: first parameter to be provided
 * @b: second parameter to be provided
 * int c: addressed the swapped value will be sent to
 * return: Always 0
 */

void swap_int(int *a, int *b)

{
	int c = *a;
	*a = *b;
	*b = c;
}
