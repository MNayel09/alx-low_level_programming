#include "main.h"
#define BUFFER_SIZE 1024
/**
 * error_exit - Print error message to stderr and exit with specified code.
 * @message: The error message to print.
 * @exit_code: The exit code to use.
 *
 * Return: nothing.
 */
void error_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * copy_file - Copies the content of one file to another file.
 * @file_from: The name of the source file.
 * @file_to: The name of the destination file.
 *
 * Return: nothing.
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	mode_t file_permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit("Error: Can't read from file", 98);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, file_permissions);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit("Error: Can't write to file", 99);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			error_exit("Error: Can't write to file", 99);
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit("Error: Can't read from file", 98);
	}
	if (close(fd_from) == -1)
		error_exit("Error: Can't close fd", 100);
	if (close(fd_to) == -1)
		error_exit("Error: Can't close fd", 100);
}

/**
 * main - cp file_from file_to.
 * @argc: arg count.
 * @argv: arg vector.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		error_exit("Usage: cp file_from file_to", 97);
	copy_file(argv[1], argv[2]);
	return (0);
}
