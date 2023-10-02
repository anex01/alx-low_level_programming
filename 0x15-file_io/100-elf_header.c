#include "main.h"

/**
 * display_error - Display an error message and exit with status code 98.
 * @message: The error message to display.
 */
void display_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * main - Display information from the ELF header of an ELF file.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_result, write_result;
	char *buffer;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(97);
	}

	buffer = create_buffer(argv[1]);
	file_from = open(argv[1], O_RDONLY);
	read_result = read(file_from, buffer, 1024);
	file_to = open(argv[1], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || read_result == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_result = write(file_to, buffer, read_result);
		if (file_to == -1 || write_result == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[1]);
			free(buffer);
			exit(99);
		}

		read_result = read(file_from, buffer, 1024);
		file_to = open(argv[1], O_WRONLY | O_APPEND);

	} while (read_result > 0);

	free(buffer);
	close_file(file_from);
	close_file(file_to);

	return (0);
}

