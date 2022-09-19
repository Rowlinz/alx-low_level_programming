#include "main.h"
#include "string.h"
#include <stdio.h>


/**
 *print_rev: - prints a string in revers order
 *@s: string to revers
 *returns nothing
 */

void print_rev(char *s);
{
	int len = strlen(s);
	while (len --)
		putchar(*(s + len));
	putchar(10);
}
