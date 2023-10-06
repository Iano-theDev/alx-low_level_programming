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
	ssize_t count = 0;
	char *buff = NULL;
	int bytes_written;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp < 0)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);
	count = read(fp, buff, letters);

	if (count < 0)
		return (0);

	bytes_written = write(1, buff, count);

	if (bytes_written == -1)
		return (0);

	close(fp);

	return (bytes_written);
}
