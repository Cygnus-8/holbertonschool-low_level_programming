#include "main.h"

/**
 * main - main function
 * @ac: argument counter
 * @av: argument vector
 * Return: Always 0
 */

int main(int ac, char **av)
{
	int i, k, p, fd = 0;
	char *file_from, *file_to;
	char buffer[1024];

	if (ac > 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = av[1];
	file_to = av[2];

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	i = read(fd, buffer, 1024);
	if (i == -1)
	{	
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	p = close (fd);
	if (p == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

	fd = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	
	k = write(fd, buffer, i);

	p = close (fd);
	if (p == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

	if (k == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	
	return (0);
}
