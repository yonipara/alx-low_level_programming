#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int fd1, fd2, i, j, k;
	char *buffer;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s cp file_from file_to\n", argv[0]);
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);

	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	i = read(fd1, buffer, 1024);

	if (i == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	buffer[i] = '\0';

	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

        if (fd2 == -1)
        {
                dprintf(2, "Error: Can't write to %s\n", argv[2]);
                free(buffer);
		exit(99);
        }

	j = write(fd2, buffer, i);

	if (j == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
                exit(99);
	}

	free(buffer);

	k = close(fd1);
	{
		if (k == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", fd1);
			exit(100);
		}
	}

	k = close(fd2);
	{
		if (k == -1)
                {
                        dprintf(2, "Error: Can't close fd %d\n", fd2);
			exit(100);
                }
	}
	return (0);
}
