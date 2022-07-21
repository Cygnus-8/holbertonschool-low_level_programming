#include "main.h"

/**
 * create_file - cfr description
 * @filename: the name of the file to create
 * @text_content: the string to write on filename
 * Description: Function that create a file and write on
 * Return: 1 on success or -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, k, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 600);
	if (fd == -1)
		return (-1);

	while (text_content[len])
		len++;

	k = write(fd, text_content, len);
	close(fd);

	if (k == -1)
		return (-1);

	return (1);
}
