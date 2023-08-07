#include "main.h"


/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: the name of the file to raed.
 * @letters:the number of letters it should read and print.
 *
 * Return: returns the actual number of letters it could read and print
 * ->if the file can not be opened or read, return 0
 *  if filename is NULL return 0
 *  if write fails or does not write the expected amount of bytes, return 0
 */



ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	ssize_t b_read;
	ssize_t b_written;
	int fd;

	if (!(filename && letters))
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	b_read = read(fd, buffer, letters);
	close(fd);

	if (b_read < 0)
	{
		free(buffer);
		return (0);
	}

	if (!b_read)
		b_read = letters;

	b_written = write(STDOUT_FILENO, buffer, b_read);
	free(buffer);

	if (b_written < 0)
		return (0);

	return (b_written);
}
