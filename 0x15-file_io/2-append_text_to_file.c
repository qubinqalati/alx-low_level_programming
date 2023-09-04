#include "main.h"

/**
 * _strlen - lorem upsum
 * @str: lorem ipsum
 *
 * Return: ...
 */

size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * append_text_to_file - lorem ipsum
 * @filename: lorem ipsum
 * @text_content: lorem ipsum
 *
 * Return: ...
 */

int append_text_to_file(const char *filename, char *text_cintent)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == 1)
		return (-1);
	else if (text_content != NULL)
		len = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}
