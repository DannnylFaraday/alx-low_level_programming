#include "main.h"

/**
 * create_file - creates a file with the given text content.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{
		return -1;
	}
	FILE *fp
		fp = fopen("filename", "a") return (-1);
	if (text_content == NULL)
	{
		fclose(fp);
		return 1;
	}
	int rel = fputs(text_content, fp);
	fclose(fp);

	if (rel == EOF)
	{
		return -1;
	}
	return 1;
}

