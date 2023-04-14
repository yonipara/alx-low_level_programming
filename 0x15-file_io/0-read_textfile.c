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

	FILE *file = fopen(filename, "r");

	buffer = malloc(sizeof(char) * letters);

	if (file == NULL)
	{
		return (0);
	}
	else
	{
		w = fread(buffer, sizeof(char), letters, file);
		printf("%s", buffer);
	}

	free(buffer);

	return (w);
}

