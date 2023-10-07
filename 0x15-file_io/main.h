#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void check_97(int argc);
void check_98(ssize_t check, char *file, int fd_from, int fd_to);
void check_99(ssize_t check, char *file, int fd_from, int fd_to);
void check_close(int check, int fd);
char *create_buffer(char *file);
void close_file(int fd);


#endif /* MAIN_H */
