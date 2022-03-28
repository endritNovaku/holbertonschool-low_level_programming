#include "main.h"

/**
 * read_textfile - reads a txt file
 * @filename: file to be readed
 * @letters: max number of letters
 * Return: length of the file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	int rd, wr;
	char *buff;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	rd = read(f, buff, letters);
	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == -1)
		return (0);

	free(buff);
	close(f);
	return (rd);
}
