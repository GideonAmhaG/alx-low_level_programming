#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd_o, fd_w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd_o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fd_w = write(fd_o, text_content, len);

	if (fd_o == -1 || fd_w == -1)
		return (-1);

	close(fd_o);

	return (1);
}
