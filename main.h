#ifndef FUNC
#define FUNC

#include <stdarg.h>
#include <unistd.h>

int _putchar(char x);
int print_newline(va_list args);
int print_char(va_list args);
int print_string(va_list args);
int _printf(const char *format, ...);

typedef struct print_map {
	char *s;
	int (*f)(va_list args);
} function_map;

#endif
