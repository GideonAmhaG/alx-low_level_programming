#include "variadic_functions.h"

void print_char(va_list ap);
void print_int(va_list ap);
void print_float(va_list ap);
void print_string(va_list ap);

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j;
	char *separator = "";
	pr_t f[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(f[j].c)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			f[j].fp(ap);
			separator = ", ";
		}

		i++;
	}

	printf("\n");
	va_end(ap);
}

/**
 * print_char - prints a char
 * @ap: a list of arguments pointing to the character to be printed
 */

void print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	printf("%c", c);
}

/**
 * print_int - prints an int
 * @ap: a list of arguments pointing to the integer to be printed
 */

void print_int(va_list ap)
{
	int n;

	n = va_arg(ap, int);
	printf("%d", n);
}

/**
 * print_float - prints a float
 * @ap: a list of arguments pointing to the float to be printed
 */

void print_float(va_list ap)
{
	float f;

	f = va_arg(ap, double);
	printf("%f", f);
}
/**
 * print_string - prints a string
 * @ap: a list of arguments pointing to the string to be printed
 */

void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}
