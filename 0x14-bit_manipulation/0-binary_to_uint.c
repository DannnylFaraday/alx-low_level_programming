#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a pointer to a string of 0 and 1 character.
 *
 * return:the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (!b)
		return (0);

	/* Goes through each character in the string */
	for (i = 0; b[i] != '\0'; i++)
	{
		/* Check for invalid characters */
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		/* Left shift by 1, equivalent to multiplying by 2 */
		num <<= 1;

		/* If the current digit is '1', add it to the result */
		if (b[i] == '1')
			num += 1;
	}

	return (num);
}
