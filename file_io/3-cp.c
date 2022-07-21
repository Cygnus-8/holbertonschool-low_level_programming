#include "main.h"

/**
 * main - main function
 * @ac: argument counter
 * @av: argument vector
 * Return: Always 0
 */

int main(int ac, char **av)
{
	int i, k, len = 0, fd_from = 0, fd_to = 0;
	char *file_from, *file_to;
	char buffer[1024], *tmp;

	if (ac != 3)
		custom_error("", 97);

	file_from = av[1];
	file_to = av[2];

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
		custom_error(file_from, 98);
	while (file_from && file_from[len])
		len++;

	if (len < 1024)
		i = read(fd_from, buffer, 1024);
	else
	{
		tmp = malloc(sizeof(char) * len);
		i = read(fd_from, tmp, len);
	}
	if (i == -1)
		custom_error(file_from, 98);
	custom_close(fd_from);
	fd_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_to == -1)
		custom_error(file_to, 99);
	if (len < 1024)
		k = write(fd_to, buffer, i);
	else
		k = write(fd_to, tmp, i);
	free(tmp);
	custom_close(fd_to);
	if (k == -1)
		custom_error(file_to, 99);
	return (0);
}
