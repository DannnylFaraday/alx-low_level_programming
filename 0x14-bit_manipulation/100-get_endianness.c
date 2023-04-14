#include "main.h"

/**
 * get_endianness - a function that checks the orders of bytes
 * return: When its big endian[0] && little endian[1]
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	if (*c)
		return (1);
	return (0);
}
