#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 * function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd;
ssize_t w;
ssize_t t;
char *buffer;

fd = open(filename, 0_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
t = read(fd, buffer, letters);
w = write(STDOUT_FILENO, buffer, t);
free(buffer);
close(fd);
return (w);
}
