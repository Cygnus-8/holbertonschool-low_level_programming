#include "main.h"

/**
 * custom_error - cfr description
 * @error_code: integer error code
 * @filename: file treated
 * Return: Nothing
 */

void custom_error(char *filename, int error_code)
{
	if (error_code == 97)
	{
		dprintf(2, "Usage: cp file_from file_to%s\n", filename);
		exit(97);
	}
	else if (error_code == 98)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else
	{
		dprintf(2, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * custom_close - cfr description
 * @fd: file descriptor
 * Return: Nothing
 */

void custom_close(int fd)
{
	int p;

	p = close(fd);

	if (p < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
