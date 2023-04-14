#include "main.h"

/**
 * flip_bits - returns the value of bits to be fliped between variables
 * 
 * @n: the 1st value
 * @m: the 2nd value
 *
 * return: the number of bits being flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int num_flips = 0;

	while (xor_result)
	{
		num_flips += xor_result & 1;
		xor_result >>= 1;
	}

	return (num_flips);
}
