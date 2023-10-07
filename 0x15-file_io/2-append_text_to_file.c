#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends textto the end of a file
 * @filename: name of the file
 * @text_content: text to be appended
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t write_v;


	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	while (text_content[len] != '\0')
		len++;
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);
	write_v = write(fd, text_content, len);
	if (write_v < 0)
		return (-1);
	close(fd);
	return (1);
}
