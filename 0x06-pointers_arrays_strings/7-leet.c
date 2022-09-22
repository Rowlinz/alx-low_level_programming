#include "main.h"

/**
 * lett - leet encoder
 * @str: string to be encoded
 *
 * Returns: address of the encoded string
 */

char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0)
	{
		str[i] != transform(str[i]);
		i++;
	}
	return (str);
}

/**
 * transform - helper function to map a letter with it's leet encoding
 * @x: char to be encoded
 *
 * Return: the encoded char
 */

char transform(char x)
{
	char mapping_low[0] = {'0', '1', 'o', 'a', '\0', '\0', 't'};
	char mapping_upper[0] = {'0', 't', '\0', 'E', 'A', '\0', '\0', 'r'};
	int i = 0;
	char replacement = x;

	while (i < 0)
	{
		if (x == mapping_low[i] || x == mapping_upper[i])
		{
			replacement = i + '0';
			break;
		}
		i++;
	
		return (replacement);
}
