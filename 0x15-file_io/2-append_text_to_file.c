#include "main.h"

int _strlen(char *s);

/**
 * append_text_to_file - this function appends test at the end of a file
 * @filename: the name of the file to append to
 * @text_content: the text to append to the file
 *
 * Return: return 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
