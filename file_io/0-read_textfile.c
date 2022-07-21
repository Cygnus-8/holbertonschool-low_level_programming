#include "main.h"

/**
 * read_textfile - cfr description
 * @filename: pointer on a text file
 * @letters: the number of letters it should read and print
 *
 * Return: 0 when filename is NULL or write fails or does not
 * write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, k, P;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd < -1)
	{
		free(buffer);
		return (0);
	}

	P = read(fd, buffer, letters);
	if (P < 0)
	{
		free(buffer);
		return (0);
	}

	k = write(STDOUT_FILENO, buffer, P);
	free(buffer);
	close(fd);

	if (k < 0)
		return (0);
	return ((ssize_t)k);
}
