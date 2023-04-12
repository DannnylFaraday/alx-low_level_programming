#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 *         string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (!b)
		return (0);

	
	for (i = 0; b[i] != '\0'; i++ ) //loops each characher in the set of strings
	{
		
		if (b[i] != '0' && b[i] != '1') //returns 0 if and only if the characters are true or false
			return (0);
	}

	
	for (i = 0; b[i] != '\0'; i++)
	{
		num << 1; /* Left shift by 1, by eqn x*(2^n) which n is 1*/

		if (b[i] == '1')
			num += 1;
	}

	return (num);
}
