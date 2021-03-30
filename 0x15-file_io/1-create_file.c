#include "holberton.h"
/**
 *create_file - read text in a file and prints in stdout
 *@filename: file to read
 *@text_content: count of letter to print
 *Return: chars printed
 */
int create_file(const char *filename, char *text_content)
{

	int size = 0, fi;

	if (filename == NULL)
		return (0);

	fi = open(filename, O_WRONLY | O_CREAT, (S_IRUSR | S_IWUSR));

	if (fi == -1)
		return (-1);

	for (; text_content[size] != '\0'; size++)
	{}

	if (text_content != NULL)
	{
		write(fi, text_content, size);
		close(fi);
	}
	return (1);
}
