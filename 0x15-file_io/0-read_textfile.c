#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the STDOUT
 * @filename: is the name of the file
 * @letters: number of letters it should read or print
 *
 * Return: Number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, op, wrt;
	char *buff;

	if (!filename)
		return (0);
	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	rd = read(op, buff, letters);
	wrt = write(STDOUT_FILENO, buff, rd);

	close(op);
	free(buff);
	return (wrt);
}
