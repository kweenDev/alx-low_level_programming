#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
* display_error - Display error message and exit.
* @message: The error message to display.
*/
void display_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
* display_elf_header_info - Display ELF header information.
* @header: A pointer to the ELF header structure.
*/
void display_elf_header_info(const Elf32_Ehdr *header)
{
	int i;

	printf("Magic: ");

	for (i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("Class: ");

	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Unknown\n");
	}

	printf("Data: ");

	switch (header->e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little-endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big-endian\n");
			break;
		default:
			printf("Unknown\n");
	}

	printf("Version: %d\n", header->e_ident[EI_VERSION]);

	printf("OS/ABI: ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		default:
			printf("Unknown\n");
	}

	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

	printf("Type: ");
	switch (header->e_type)
	{
		case ET_NONE:
			printf("NONE\n");
			break;
		case ET_REL:
			printf("Relocatable\n");
			break;
		case ET_EXEC:
			printf("Executable\n");
			break;
		case ET_DYN:
			printf("Shared object\n");
			break;
		case ET_CORE:
			printf("Core\n");
			break;
		default:
			printf("Unknown\n");
	}

	printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}

/**
* main - Entry point of the program.
* @argc:
* @argv:
*
* Description:
* Return:
*/
int main(int argc, char *argv[])
{
	int fd;
	Elf32_Ehdr header;

	if (argc != 2)
	{
		display_error("Usage: elf_header elf_filename");
	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		display_error("Failed to open the file");
	}

	if (lseek(fd, 0, SEEK_SET) == -1)
	{
		display_error("Failed to seek to the beginning of the file");
	}

	if (read(fd, &header, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr))
	{
		display_error("Failed to read ELF header");
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		display_error("Not an ELF file");
	}

	display_elf_header_info(&header);

	close(fd);

	return (0);
}
