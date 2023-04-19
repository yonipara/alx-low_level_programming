#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	int len = 0;

	fd = open(filename, O_WRONLY|O_TRUNC|O_CREAT, 0600);

	if (fd != -1)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			len++;
		}

		write(fd, text_content, len);

		write(fd, '\0', 1);

		close(fd);

		return (1);
	}
	else
	{
		return (-1);
	}
}

