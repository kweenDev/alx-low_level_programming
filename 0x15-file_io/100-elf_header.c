#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
* print_error - Prints an error message and exits with status code 98.
* @msg: Error message to display.
*/
void print_error(char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(98);
}

/**
* print_header - Prints the ELF header information.
* @header: Pointer to the ELF header.
*/
void print_header(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
	printf("  Class:                             ");

	if (header->e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (header->e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");

	printf("  Data:                              %s\n",
(header->e_ident[EI_DATA] == ELFDATA2LSB) ?
"2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
		header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");

	printf("\n");
	printf("  ABI Version:                       %d\n",
	header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");

	printf("\n");
	printf("  Entry point address:               %#lx\n", header->e_entry);
}

/**
* main - Entry point of the program.
* @argc: Number of command-line arguments.
* @argv: Array of command-line argument strings.
* Return: 0 on success, 98 on error.
*/
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
		print_error("Error: Can't open file");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Error: Can't read file");

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	header.e_ident[EI_MAG1] != ELFMAG1 ||
	header.e_ident[EI_MAG2] != ELFMAG2 ||
	header.e_ident[EI_MAG3] != ELFMAG3)
		print_error("Error: Not an ELF file");

	print_header(&header);

	if (close(fd) == -1)
		print_error("Error: Can't close file");

	return (0);
}
