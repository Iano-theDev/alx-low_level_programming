#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content of the file
 *
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, _strlen;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (_strlen = 0; text_content[_strlen]; _strlen++)
		;
	wr = write(fd, text_content, _strlen);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
