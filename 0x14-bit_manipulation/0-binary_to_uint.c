#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - Functions converts binary number
 * @b: A pointer to binary string
 * return: unsigned integer converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, result = 0, len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len = len +1;

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
			result += base;
		base *= 2;
		len = len - 1;
	}
	return (result);
}
