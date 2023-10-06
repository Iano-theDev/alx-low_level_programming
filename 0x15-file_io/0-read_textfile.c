#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * read_textfile - reads and prints the contents of a text file
 * @filename: path to file
 * @letters: number of characters read/printed
 * Return: letters, 0 if file is NULL or can't be opened
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count, fp, bytes_written;
	char *buff = NULL;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp < 0)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	count = read(fp, buff, letters);
	bytes_written = write(STDOUT_FILENO, buff, count);
	if (bytes_written == -1)
		return (0);
	close(fp);
	free(buff);
	return (bytes_written);
}
