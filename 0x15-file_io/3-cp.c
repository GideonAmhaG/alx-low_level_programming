#include "main.h"

char *_buffer(char *file);
void _close(int fd);

/**
 * main - copies the contents of a file to another file
 * @ac: number of argumets
 * @av: pointers to the strings of the arguments
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int fdo_from, fdo_to, fdr, fdw;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = _buffer(av[2]);
	fdo_from = open(av[1], O_RDONLY);
	fdr = read(fdo_from, buffer, 1024);
	fdo_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (fdr > 0)
	{
		if (fdo_from == -1 || fdr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", av[1]);
			free(buffer);
			exit(98);
		}

		fdw = write(fdo_to, buffer, fdr);
		if (fdo_to == -1 || fdw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					av[2]);
			free(buffer);
			exit(99);
		}

		fdr = read(fdo_from, buffer, 1024);
		fdo_to = open(av[2], O_WRONLY | O_APPEND);
	}

	free(buffer);
	_close(fdo_from);
	_close(fdo_to);

	return (0);
}

/**
 * _buffer - creates a buffer
 * @file: name of file needing this buffer
 *
 * Return: a pointer to the buffer
 */
char *_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * _close - closes file descriptors
 * @fd: the file descriptor
 */
void _close(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

