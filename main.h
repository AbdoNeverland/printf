#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void _putchar(char c);
void print_string(char *str, int *nb_printed);
int _printf(const char *const format, ...);
void print_int(long int n, int *nb_printed);
void print_b(unsigned int n, int *nb_printed);
#endif
