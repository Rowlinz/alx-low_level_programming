#include "main.h"

#include <stdio.h>

/**
 * Swap_int - Swapt two integer values
 * @a: First integer value
 * @b: second integer value
 * Return: Returns nothing
 */

void swap_int(int *a, int *b);
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
