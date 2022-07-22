#include "main.h"

char *custom_buffer(char *file);
void custom_close(int fd);

/**
 * custom_close - cfr description
 * @fd: file descriptor
 * Description: close the file descriptor
 * Return: Nothing
 */

void custom_close(int fd)
{
	int a;

	a = close(fd);
	if (a < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * custom_buffer - cfr description
 * @file: file to write to
 * Description: create a buffer
 * Return: a pointer on buffer if success
 */
char *custom_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * main - cfr description
 * @ac: argument counter
 * @av: argument vector
 * Return: Always 0
 */

int main(int ac, char **av)
{
	int i, k, fd_from = 0, fd_to = 0;
	char *buffer;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = custom_buffer(av[2]);

	fd_from = open(av[1], O_RDONLY);
	i = read(fd_from, buffer, 1024);
	fd_to = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	do {
		if (fd_from < 0 || i < 0)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			free(buffer);
			exit(98);
		}
		k = write(fd_to, buffer, i);
		if (fd_to < 0 || k < 0)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			free(buffer);
			exit(99);
		}

		i = read(fd_from, buffer, 1024);
		fd_to = open(av[2], O_WRONLY | O_APPEND);

	} while (i < 0);

	free(buffer);
	custom_close(fd_to);
	custom_close(fd_from);

	return (0);
}

