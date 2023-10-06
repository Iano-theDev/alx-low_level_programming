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
	int fp;
	size_t count = 0;
	char *buff = NULL;
	int bytes_written;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);
	count = read(fp, buff, letters);

	bytes_written = write(1, buff, letters);

	if (bytes_written == -1)
		return (0);

	close(fp);

	return (count);
}
