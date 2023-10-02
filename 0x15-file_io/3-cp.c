#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_READ "Error: Can't read from file %s\n"
#define ERR_WRITE "Error: Can't write to %s\n"
#define ERR_CLOSE "Error: Can't close fd %d\n"
#define RWRWR (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define BUFFER_size 1024

/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: an array of arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	char *src, *dst, BUF[BUFFER_size];
	int fdsrc, fddst;
	ssize_t rd;

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	src = argv[1], dst = argv[2];

	fdsrc = open(src, O_RDONLY);
	if (fdsrc == -1)
		dprintf(STDERR_FILENO, ERR_READ, src), exit(98);

	fddst = open(dst, O_CREAT | O_WRONLY | O_TRUNC, RWRWR);
	if (fddst == -1)
		dprintf(STDERR_FILENO, ERR_WRITE, dst), exit(99);

	while ((rd = read(fdsrc, BUF, BUFFER_size)) > 0)
		if (write(fddst, BUF, rd) != rd)
			dprintf(STDERR_FILENO, ERR_WRITE, dst), exit(99);

	if (rd == -1)
		dprintf(STDERR_FILENO, ERR_READ, src), exit(98);


	if (close(fdsrc) == -1)
		dprintf(STDERR_FILENO, ERR_CLOSE, fdsrc), exit(100);
	if (close(fddst) == -1)
		dprintf(STDERR_FILENO, ERR_CLOSE, fddst), exit(100);

	return (0);
}
