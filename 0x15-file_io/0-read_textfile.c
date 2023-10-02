#include "main.h"

/**
 * read_textfile - this function reads a text file and prints it to
 *	the POSIX STDOUT
 * @filename: pointer to the text file
 * @letters: the number of letters the function should read and print
 *
 * Return: returns the actual number of letters it could read and print
 *	0 if the file can not be opened or read
 *	or if filename is NULL
 *	or if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, bytes_written;
	char *BUF;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	BUF = malloc(letters);
	if (fd == -1 || BUF == NULL)
	{
		free(BUF);
		return (0);
	}

	rd = read(fd, BUF, letters);
	if (rd == -1)
		return (0);
	bytes_written = write(STDOUT_FILENO, BUF, rd);

	free(BUF);
	close(fd);

	if (bytes_written == -1)
		return (0);

	return (rd);
}
