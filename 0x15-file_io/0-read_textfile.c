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
		return (0);
	}
	FILE *file = fopen(filename, "r");
	if (file == NULL)
	{
		return 0;
	}

	char *list = malloc(sizeof(char) * letters);
	if (list == NULL)
	{
		fclose(file);
		return 0;
	}

	size_t count = fread(list, sizeof(char), letters, file);
	if (count == 0)
	{
		fclose(file);
		free(list);
		return 0;
	}

	fwrite(list, sizeof(char), count, stdout);

	fclose(file);
	free(list);

	return count;
}

