#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
/**
 * print_error_and_exit - prints error message and  exit.
 * @message: the message ro be printed.
 *
 * Return: nothing.
 */
void print_error_and_exit(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * main - prints specific fields of the ELF header.
 * @argc: arg count.
 * @argv: arg vector.
 *
 * Return: =0.
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	int fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		print_error_and_exit("Can't open file");
	}

	Elf64_Ehdr header;

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		print_error_and_exit("Can't read ELF header");
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0
		|| header.e_ident[EI_MAG1] != ELFMAG1
		|| header.e_ident[EI_MAG2] != ELFMAG2
		|| header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error_and_exit("Not an ELF file");
	}
	printf("ELF Header:\n");
	print_magic(&header);
	print_class(&header);
	print_data(&header);
	print_version(&header);
	print_osabi(&header);
	close(fd);
	return (0);
}
