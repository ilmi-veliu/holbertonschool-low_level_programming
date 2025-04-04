#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>    // pour open() et les options comme O_RDONLY
#include <unistd.h>   // pour read(), write(), close()
#include <stdlib.h>   // pour malloc(), free()

ssize_t read_textfile(const char *filename, size_t letters);

#endif
