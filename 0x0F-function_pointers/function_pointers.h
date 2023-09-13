#ifndef FUN_PTR_H
#define FUN_PTR_H

#include <stddef.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* #ifndef FUN_PTR_H */
