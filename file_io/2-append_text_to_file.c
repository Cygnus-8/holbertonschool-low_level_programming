#include "main.h"

/**
 * append_text_to_file - cfr description
 * @filename: Name of the file to work on
 * @text_content: The string to add at the end of the file
 * Description: Function that appends text at the end of a file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, k, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR);

	if (fd == -1)
		return (-1);

	while (text_content && text_content[len] != '\0')
		len++;

	k = write(fd, text_content, len);
	close(fd);

	if (k == -1)
		return (-1);
	return (1);
}

