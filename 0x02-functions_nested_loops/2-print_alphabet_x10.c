#include "main.h"

/**
 * print_alphabet_x10 - 'make alphabet x10 times'
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	for(i <= 10;)
	{
		for (c = 'a'; c <= 'z'; c++;){
			_putchar(c);
		}
		i++;
	}	
}
