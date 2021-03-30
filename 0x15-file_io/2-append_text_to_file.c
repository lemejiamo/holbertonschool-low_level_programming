#include "holberton.h"
/**
 *append_text_to_file - append text to a file
 *@text_content: a pointer to text to append
 *@filename:file to write
 *Return: 1 if succes -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, size = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[size] != '\0'; size++)
		{}
		write(fd, text_content, size);
	}
	close(fd);
	return (1);
}
