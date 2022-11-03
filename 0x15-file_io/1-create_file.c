#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file
 *
 * @filename: the name of the file to be created
 * @text_content: content of the file
 *
 * Return: On success 1, otherwise -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, nb_write, len;


	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	for (len = 0; text_content[len]; len++)
	{
	}
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	nb_write = write(fd, text_content, len);

	if (nb_write == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
