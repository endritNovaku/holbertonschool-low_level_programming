#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - character
 * @char_list: list
 */
void print_char(va_list char_list)
{
	printf("%c", va_arg(char_list, int));
}

/** 
 * print_int - int
 * @int_list: int list
 */
void print_int(va_list int_list)
{
	printf("%i", va_arg(int_list, int));
}

/** 
 * print_float - float
 * @foat_list: float list
 */
void print_float(va_list float_list)
{
	printf("%f", va_arg(float_list, double));
}

/**
 * print_s - print string
 * @s_list: string list
 */
void print_s(va_list s_list)
{
	char str = va_arg(s_list, char *);
	if (str != NULL)
		printf("%s", va_arg(s_list, char *));
	else
		printf("(nil)");
}

/**
 * print_all - printf
 * @format: format
 */
void print_all(const char* const format, ...)
{
	va_list args_list;
	int i = 0, j;
	char *separator = "";

	print_data print_funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_s}};

	va_start(args_list, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4 && format[i] != *print_funcs[i].type)
		{
			if (j < 4)
			{
			printf("%s", separator);
			print_funcs[j].print(args_list);
			separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args_list);
}
