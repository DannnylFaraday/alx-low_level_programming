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
	ssize_t f_desc, b_read, b_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	f_desc = open(filename, O_RDONLY);
	b_read = read(f_desc, buffer, letters);
	b_written = write(STDOUT_FILENO, buffer, b_read);

	if (f_desc == -1 || b_read == -1 || b_written == -1 || b_written != b_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(f_desc);

	return (b_written);
}
