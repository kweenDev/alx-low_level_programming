#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include "main.h"

/**
* error_exit - Print error message and exit with given status code.
* @msg: Error message.
* @exit_code: Status code to exit with.
*/
void error_exit(char *msg, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(exit_code);
}

/**
* print_elf_header - Print ELF header information.
* @ehdr: Pointer to ELF header structure.
*/
void print_elf_header(Elf64_Ehdr *ehdr)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", ehdr->e_ident[i]);
	printf("\n");
	printf("  Class:                             %s\n",
	ehdr->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", ehdr->e_ident[EI_DATA] ==
		ELFDATA2LSB ? "2's complement, little endian" : "Unknown");
	printf("  Version:                           %d (current)\n",
		ehdr->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n",
	ehdr->e_ident[EI_OSABI] ==
	ELFOSABI_SYSV ? "UNIX - System V" : "Unknown");
	printf("  ABI Version:                       %d\n",
	ehdr->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", ehdr->e_type ==
		ET_EXEC ? "EXEC (Executable file)" : "Unknown");
	printf("  Entry point address:               0x%lx\n",
	(unsigned long)ehdr->e_entry);
}

/**
* main - Display information contained in ELF header.
* @ac: Argument count.
* @av: Argument vector.
* Return: 0 on success, appropriate error code on failure.
*/
int main(int ac, char **av)
{
	int fd;
	Elf64_Ehdr ehdr;

	if (ac != 2)
		error_exit("Usage: elf_header elf_filename", 98);

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		error_exit("Error: Can't read ELF file", 98);

	if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
		error_exit("Error: Can't read ELF header", 98);

	if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
			ehdr.e_ident[EI_MAG2] != ELFMAG2 ||
			ehdr.e_ident[EI_MAG3] != ELFMAG3)
		error_exit("Error: Not an ELF file", 98);

	print_elf_header(&ehdr);

	if (close(fd) == -1)
		error_exit("Error: Can't close file descriptor", 100);

	return (0);
}
