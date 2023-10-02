#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void copy_file(const char *src, const char *dst);

/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: an array of arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	return (0);
}

/**
 * copy_file - this function copies the content of file to another file
 * @src: the source file
 * @dst: the destination file
 */

void copy_file(const char *src, const char *dst)
{
	int fdsrc, fddst, cl;
	ssize_t rd, bytes_written;
	char BUF[1024];

	fdsrc = open(src, O_RDONLY);
	if (fdsrc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	rd = read(fdsrc, BUF, sizeof(BUF));
	cl = close(fdsrc);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdsrc);
		exit(100);
	}

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	fddst = open(dst, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fddst == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", dst);
		exit(99);
	}
	bytes_written = write(fddst, BUF, rd);
	cl = close(fddst);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fddst);
		exit(100);
	}

	if (bytes_written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", dst);
		exit(99);
	}
}
