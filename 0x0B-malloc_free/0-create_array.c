#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * initialize the char.
 * @size: the size of the array
 * @c: first parameter
 *
 * Return: a pointer to the array, or NULL if it breaks
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
