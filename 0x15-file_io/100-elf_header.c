#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define USAGE "Usage: ./elf_header elf_filename\n"
#define ERR_READ "Error: Can't read from file %s\n"
#define ERR_CLOSE "Error: Can't close fd %d\n"

/**
 * check_if_ELF - this function checks if givven file is ELF file
 * @e_ident: an array of bytes that represents the ELF
 * @file: the name of the file
 */

void check_if_ELF(unsigned char *e_ident, char *file)
{
	if (e_ident[0] == 127 &&
			e_ident[1] == 'E' &&
			e_ident[2] == 'L' &&
			e_ident[3] == 'F')
		printf("ELF Header:\n");
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", file), exit(98);
}

/**
 * print_magic - prints ELF magic bytes separated by spaces
 * @e_ident: an array of bytes that represents the ELF
 */

void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - prints the class of an ELF header
 * @e_ident: an array of bytes that represents the ELF
 */

void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - prints the data of an ELF header
 * @e_ident: an array of bytes that represents the ELF
 */

void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_version - prints the version of an ELF header
 * @e_ident: an array of bytes that represents the ELF
 */

void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
			e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
	}
}

/**
 * print_osabi - prints the OS/ABI of an ELF header
 * @e_ident: an array of bytes that represents the ELF
 */

void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi - prints the ABI verion of an ELF header
 * @e_ident: an array of bytes that represents the ELF
 */

void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
			e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints the type of an ELF header
 * @e_type: the ELF type
 * @e_ident: an array of bytes that represents the ELF
 */

void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - prints the entry point address of an ELF header
 * @e_entry: the ELF entry point
 * @e_ident: an array of bytes that represents the ELF
 */

void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * main - entry point
 * @argc: the number of arguments passed to the program
 * @argv: an array of arguments passed to the program
 *
 * Return: always 0
 *
 * Description:
 *	this program displays the information contained in the ELF
 *	header at teh start of an ELF file
 */

int main(int argc, char **argv)
{
	Elf64_Ehdr *header;
	int fd;
	ssize_t rd;

	if (argc != 2)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, ERR_READ, argv[1]), exit(98);
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		if (close(fd) == -1)
			dprintf(STDERR_FILENO, ERR_CLOSE, fd), exit(100);
		dprintf(STDERR_FILENO, ERR_READ, argv[1]), exit(98);
	}
	rd = read(fd, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		if (close(fd) == -1)
			dprintf(STDERR_FILENO, ERR_CLOSE, fd), exit(100);
		dprintf(STDERR_FILENO, ERR_READ, argv[1]), exit(98);
	}

	check_if_ELF(header->e_ident, argv[1]);
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	if (close(fd) == -1)
		dprintf(STDERR_FILENO, ERR_CLOSE, fd), exit(100);

	return (0);
}
