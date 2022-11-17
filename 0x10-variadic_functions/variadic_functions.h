#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/*
 * File : variadic_functions.h
 * Functions
 */

/**
 * struct pr - struct print
 * @c: character representing data type
 * @fp: a fuction pointer to a function to print a certain data type
 */

typedef struct pr
{
	char *c;
	void (*fp)(va_list ap);
} pr_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* #ifndef VARIADIC_FUNCTIONS_H */
