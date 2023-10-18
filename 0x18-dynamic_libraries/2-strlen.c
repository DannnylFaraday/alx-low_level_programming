#include "main.h"
/**
 * _strlen - give the length of a string
 * @s: the string
 *
 * Return: 0 is Success
 */
int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		;
	return (i);
}
