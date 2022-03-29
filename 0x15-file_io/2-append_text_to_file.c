#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: name of the file
 * @text_content: text content
 * Return: 1 on success else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;
	int i = 0;

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}

	w = write(fd, text_content, i);
	write(fd, '\0', i + 1);
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
