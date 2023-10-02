#include "main.h"

int _strlen(char *s);

/**
 * create_file - this function creates a file
 * @filename: the name of the (new) file
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success
 *	-1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = creat(filename, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		bytes_written = write(fd, text_content, _strlen(text_content));

	close(fd);
	if (bytes_written == -1)
		return (-1);

	return (1);
}

/**
 * _strlen - this function compute the lenght of a string
 * @s: pointer to the string
 * Return: return the lenght of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
