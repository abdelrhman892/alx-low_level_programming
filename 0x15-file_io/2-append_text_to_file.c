#include "main.h"
/**
 * _strlen - returns the lenght
 *
 * @s: the string
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
/**
 * append_text_to_file - append_text_to_file
 *
 * @filename: pointer
 * @text_content: content of text
 *
 * Return: 1 if success, 0 if it filed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0,
		len = _strlen(text_content);
	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
