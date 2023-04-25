#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct spec_fun - struct
 *@specifier: the specifier
 *@function: function pointer
 */
struct spec_fun
{
	char specifier;
	void (*function)(const char *const format,
			int i, va_list ap, int *nb_printed);
};
typedef struct spec_fun spe_fun;
void _putchar(char c);
void print_c(const char *const format, int i, va_list ap, int *nb_printed);
void print_string(const char *const format,
		int i, va_list ap, int *nb_printed);
void print_rstring(const char *const format,
		int i, va_list ap, int *nb_printed);
int _printf(const char *const format, ...);
void print_int(const char *const format, int i, va_list ap, int *nb_printed);

void print_unsignedInt(const char *const format,
		int i, va_list ap, int *nb_printed);
void print_octal(const char *const format, int i, va_list ap, int *nb_printed);
void print_Upper_Hexa(const char *const format,
		int i, va_list ap, int *nb_printed);
void print_Lower_Hexa(const char *const format,
		int i, va_list ap, int *nb_printed);

void print_b(const char *const format, int i, va_list ap, int *nb_printed);
void print_S(const char *const format, int i, va_list ap, int *nb_printed);
void print_p(const char *const format, int i, va_list ap, int *nb_printed);
#endif
