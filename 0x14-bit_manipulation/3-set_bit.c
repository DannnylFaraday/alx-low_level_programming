#include "main.h"

/**
 * set_bit - functionsets the value to a specific index
 * @*n: a pointer to the number to set the bit in
 * @index: the index of the bit  starting from 0
 *@UL: UL/L tells the compiler that they are not type int [me aing they are long int]
 * return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num_bits = sizeof(unsigned long int) * 8;

	if (index >= num_bits)
		return (-1);

	*n |= (1UL << index);

	return (1);
}
