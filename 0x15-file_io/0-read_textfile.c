#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard
 * output
 * @filename: the text file
 * @letters: number of letters read and printed
 *
 * Return: number of letters read and printed or 0 if problems exist
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd_o, fd_r, fd_w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd_o = open(filename, O_RDONLY);
	fd_r = read(fd_o, buffer, letters);
	fd_w = write(STDOUT_FILENO, buffer, fd_r);

	if (fd_o == -1 || fd_r == -1 || fd_w == -1 || fd_r != fd_w)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd_o);

	return (fd_w);
}
