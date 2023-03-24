#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int print_c(va_list a);
int print_i(va_list a);
int print_f(va_list a);
int print_s(va_list a);
/**
 * struct printer - struct for 3
 * @symbole: character to check
 * @print: function to point to
 */
typedef struct printer
{
	char *symbole;
	void (*print)(va_list arg);
} printer_t;
#endif
