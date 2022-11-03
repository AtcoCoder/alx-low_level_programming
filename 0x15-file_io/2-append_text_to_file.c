#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file to be appended
 * @text_content: NULL terminated string added  at the end
 *
 * Return: 1 On success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nb_write, len;

	if (filename == NULL)
	{
		return (-1);
	}


	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}


	if (text_content == NULL)
	{
		return (1);
	}

	for (len = 0; text_content[len]; len++)
		;

	nb_write = write(fd, text_content, len);

	if (nb_write == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}
