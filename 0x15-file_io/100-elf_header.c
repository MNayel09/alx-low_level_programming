#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_error_and_exit - prints error message and exits.
 * @message: the message to be printed.
 *
 * Return: nothing.
 */
void print_error_and_exit(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * print_magic - prints the magic of the header.
 * @header: the header.
 *
 * Return: nothing.
 */
void print_magic(const Elf64_Ehdr *header)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
}

/**
 * print_class - prints the class of the header.
 * @header: the header.
 *
 * Return: nothing.
 */
void print_class(const Elf64_Ehdr *header)
{
	printf("Class: ");
	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("Invalid class\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
}

/**
 * print_data - prints the data of the header.
 * @header: the header.
 *
 * Return: nothing.
 */
void print_data(const Elf64_Ehdr *header)
{
	printf("Data: ");
	switch (header->e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("Invalid data encoding\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
}

/**
 * print_version - prints the version of the header.
 * @header: the header.
 *
 * Return: nothing.
 */
void print_version(const Elf64_Ehdr *header)
{
	printf("Version: %d\n", header->e_ident[EI_VERSION]);
}

/**
 * print_osabi - prints the osabi of the header.
 * @header: the header.
 *
 * Return: nothing.
 */
void print_osabi(const Elf64_Ehdr *header)
{
	printf("OS/ABI: ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris\n");
			break;
		case ELFOSABI_AIX:
			printf("AIX\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
}

/**
 * print_abi_version - prints the abi version of the header.
 * @header: the header.
 *
 * Return: nothing.
 */
void print_abi_version(const Elf64_Ehdr *header)
{
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints type of header.
 * @header: the header.
 *
 * Return: nothing.
 */
void print_type(const Elf64_Ehdr *header)
{
	printf("Type: ");
	switch (header->e_type)
	{
		case ET_NONE:
			printf("No file type\n");
			break;
		case ET_REL:
			printf("Relocatable file\n");
			break;
		case ET_EXEC:
			printf("Executable file\n");
			break;
		case ET_DYN:
			printf("Shared object file\n");
			break;
		case ET_CORE:
			printf("Core file\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
}

/**
 * print_entry_point - prints the entry point of header.
 * @header: the header.
 *
 * Return: nothing.
 */
void print_entry_point(const Elf64_Ehdr *header)
{
	printf("Entry point address: 0x%lx\n", header->e_entry);
}

/**
 * main - prints certain details of an ELF header.
 * @argc: arg count.
 * @argv: arg vector.
 *
 * Return: =0.
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error_and_exit("Can't open file");
	}

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
	printf("Format: readelf -h (version 2.26.1)\n");
	print_magic(&header);
	print_class(&header);
	print_data(&header);
	print_version(&header);
	print_osabi(&header);
	print_abi_version(&header);
	print_type(&header);
	print_entry_point(&header);
	close(fd);
	return (0);
}
