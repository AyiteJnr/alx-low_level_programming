#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @file_name: text file being read
 * @num_letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *file_name, size_t num_letters)
{
char *buffer;
ssize_t file_descriptor;
ssize_t bytes_written;
ssize_t total_bytes_read;
file_descriptor = open(file_name, O_RDONLY);
if (file_descriptor == -1)
return (0);
buffer = malloc(sizeof(char) * num_letters);
if (buffer == NULL)
{
close(file_descriptor);
return (0);
}
total_bytes_read = read(file_descriptor, buffer, num_letters);
if (total_bytes_read == -1)
{
close(file_descriptor);
free(buffer);
return (0);
}
bytes_written = write(STDOUT_FILENO, buffer, total_bytes_read);
if (bytes_written == -1 || bytes_written != total_bytes_read)
{
close(file_descriptor);
free(buffer);
return (0);
}
free(buffer);
close(file_descriptor);
return (bytes_written);
}
