#include <stdio.h>
#include <unistd.h>

/**
 * main - startin  point
 * Dora Korpar, 2015-10-19, followed by a line, to the standard error
 * Return: when always 0 (Success)
*/

int main(void)
{
	write(2, "and that piece of art is useful\" -Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
