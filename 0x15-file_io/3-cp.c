#include "holberton.h"
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: 0 if succes other if error
 */
int main(int argc, const char **argv)
{
	int source, destiny, rw;
	char buffer[1024];

	if (argc != 3)
	{	dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	source = open(argv[1], O_RDONLY);
	if (source == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	destiny = (open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664));
	if (destiny == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do {
		rw = read(source, buffer, 1024);
		if (rw  == -1)
		{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if ((write(destiny, buffer, rw)) == -1)
		{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (rw == 1024);
	if ((close(source)) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]);
		exit(100);
	}
	if ((close(destiny)) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]);
		exit(100);
	}
	return (0);
}
