#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - Custom printf function with additional %b specifier.
 * @format: Format string.
 * @...: Additional arguments.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
    // ... (rest of your _printf implementation)

    int printed_chars = 0;
    va_list args;
    va_start(args, format);

    while (format && *format)
    {
        if (*format == '%' && *(format + 1) == 'b')
        {
            // Read the next argument from va_list
            unsigned int num = va_arg(args, unsigned int);

            // Convert and print the number in binary
            printed_chars += print_binary(num);
            format += 2; // Move past '%b'
        }
        else
        {
            // ... (rest of your _printf format handling)
            format++;
        }
    }

    va_end(args);
    return printed_chars;
}

/**
 * print_binary - Helper function to convert and print a number in binary.
 * @num: Number to be converted.
 * Return: Number of characters printed.
 */
int print_binary(unsigned int num)
{
    // Handle the special case of 0
    if (num == 0)
    {
        _putchar('0');
        return 1;
    }

    // Use recursion to print binary representation
    int printed_chars = 0;
    if (num > 0)
    {
        printed_chars += print_binary(num / 2);
        _putchar(num % 2 + '0');
    }
    return printed_chars;
}
