#include "main.h"

/**
 * filename: The file created.
* create_file - creates a file with the given text content. 
* text_content:  Null terminated the string to write to the file.
 *
 * If returns 1 its a success, otherwise -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written = 0;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (len > 0)
		bytes_written = write(fd, text_content, len);
	close(fd);

	if (bytes_written == -1)
		return (-1);

	return (1);
}
