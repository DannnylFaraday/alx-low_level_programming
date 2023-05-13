#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and writes content to standard output.
 *
 * @filename: Pointer to the name of the file to read.
 * @letters: Number of bytes to read from the file and write to standard output.
 *
 * Return: Number of bytes read and written on success, 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_desc, bytes_read, bytes_written;
	char *buffer;

	/* Check if filename is valid */
	if (filename == NULL)
		return (0);

	/* Allocate memory for the buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* Open the file for reading */
	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
	{
		free(buffer);
		return (0);
	}

	/* Read from the file into the buffer */
	bytes_read = read(file_desc, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_desc);
		return (0);
	}

	/* Write the buffer to standard output */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(file_desc);
		return (0);
	}

	/* Free the buffer and close the file descriptor */
	free(buffer);
	close(file_desc);

	/* Return t*/
	return (bytes_written);
}

