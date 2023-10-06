#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: path to file
 * @text_content: content to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t write_v;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	while (text_content[len] != '\0')
		len++;
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd < 0)
		return (-1);
	write_v = write(fd, text_content, len);
	if (write_v < 0)
		return (-1);
	close(fd);
	return (1);
}
