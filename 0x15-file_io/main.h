File Edit Options Buffers Tools C Help                                                                                                                                                                             
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

#ifndef MAIN_H
#define MAIN_H

int create_file(const char *filename, char *text_content);
int _strlen(char *str);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
