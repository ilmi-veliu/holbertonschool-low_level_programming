#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>    /* pour open() et les options comme O_RDONLY */
#include <unistd.h>   /* pour read(), write(), close(), ssize_t */
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
