#include "main.h"

/**
 * get_bit - function gets a bit at index
 * @n: the source of the git 
 * @index: the index destination of the bit
 * return: the value of the bit [which returns 0]  or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	if ((n & max))
		return (1);
	else
		return (0);
}
