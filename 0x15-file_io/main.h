#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *file_name, size_t num_letters);
int create_file(const char *file_name, char *text_data);
int append_text_to_file(const char *file_name, char *text_data);

#endif
