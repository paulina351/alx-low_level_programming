#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char * e_ident);
void print_class(unsigned char * e_ident);
void print_data(unsigned char * e_ident);
void print_version(unsigned char * e_ident);
void print_abi(unsigned char * e_ident);
void print_osabi(unsigned char * e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - check if its ELF file
 * @e_ident: a pointer
 * Description: exit 98 if its not ELF file
 */
void check_elf(unsigned char *e_ident)
{
	int start;

	for (start = 0; start < 4; start++)
	{
		if (e_ident[start] != 127 &&
		e_ident[start] != 'E' &&
		e_ident[start] != 'L' &&
		e_ident[start] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - prints a magic number of an ELF header
 * @e_ident: a pointer
 * Description: print magic number
 */
void print_magic(unsigned char *e_ident)
{
	int start;

	printf(" Magic: ");

	for (start = 0; start < EI_NIDENT; start++)
	{
		printf("%02x", e_ident[start]);

		if (start == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - prints the class of ELF header
 * @e_ident: a pointer
 * Description: print class
 */
void print_class(unsigned char *e_ident)
{
	printf(" class:		");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32;
			printf("ELF32\n");
			break;
		case ELFCLASS64;
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EL_CLASS]);
	}
}

/**
 * print_data - print the data of ELF header
 * @e_ident: a pointer
 * Description: print data
 */
void print_data(unsigned char *e_ident)
{
	print(" Data:		");

	switch (e_ident[EL_DATA])
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
			printf("<unknown: %x>\n", e_ident[EL_CLASS]);
	}
}

/**
 * print_version - prints the version of the ELF header
 * @e_ident: a pointer
 * Description: print version
 */
void print_version(unsigned char *e_ident)
{
	printf(" Version: %d",
		e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
				break;
		default:
				printf("\n");
