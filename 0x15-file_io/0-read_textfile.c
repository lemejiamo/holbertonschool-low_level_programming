#include "holberton.h"
#include <stdlib.h>
/**
 *read_textfile - read text in a file and prints in stdout
 *@filename: file to read
 *@letters: count of letter to print
 *Return: chars printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int readed  = 0, fd;
	char  *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	readed = read(fd, buffer, letters);
	if (readed == -1)
	{
		close(fd);
		return (0);
	}
	if (write(1, buffer, readed) == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	free(buffer);
	return (readed);
}
