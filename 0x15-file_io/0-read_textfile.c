#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return 0;
	}
	FILE *base = fopen(filename, "r");
	if (fp == NULL)
	{
		return 0;
	}

	char list[letters];
	size_t count = fread(list, sizeof(char), letters, base);
	if (count == 0)
	{
		fclose(base);
		return 0;
	}
}

