#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: text to read
 * @letters: number of letters it should read and print
 *
 * Return: number of letters it could read and print, 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, 0_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}

	rd = read(fd, buffer, letters);

	wr = write(STDOUT_FILENO, buffer, rd);

	close(fd);

	free(buffer);
	return (wr);
}
