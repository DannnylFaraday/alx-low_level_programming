#include "main.h"

/**
 * clear_bit - resets of a bit to 0 at a given index
 * @n: a pointer to the number to clear the bit in
 * @index: the index of the bit to clear, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num_bits = sizeof(unsigned long int) * 8;

	if (index >= num_bits)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
