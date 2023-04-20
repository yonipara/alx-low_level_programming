#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t w;
	int fd;

	fd = open(filename, O_RDWR);

	buffer = malloc(sizeof(char) * letters);

	if (fd != -1)
	{
		w = read(fd, buffer, letters);
		printf("%s", buffer);
		free(buffer);
		close(fd);
		return (w);
	}
	else
	{
		return (0);
	}
}

