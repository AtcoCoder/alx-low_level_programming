#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the posix stdout
 *
 * @filename: pointer to the text file
 * @letters: the number of letters it should read and print
 *
 * Return: 0 if it fails, otherwise the actual number of letters it could read
 * and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nb_write, nb_read;
	char *buf;

	if (!filename)
	{
		return (0);
	}
	fd = open(filename, O_RDWR);

	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		return (0);
	}

	nb_read = read(fd, buf, letters);
	nb_write = write(STDOUT_FILENO, buf, nb_read);

	close(fd);
	free(buf);

	return (nb_write);
}
