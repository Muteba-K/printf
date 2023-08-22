#include "main.h"

/**
 * is_printable - Evaluates only if a char is printable.
 * @c: is the Char to be evaluated
 *
 * Returns 1 if c is printable, else 0.
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Appends the ascci in hexadecimal code to buffer
 * @buffer is an Array of chars.
 * @i is the Index at which to start appending.
 * @ascii_code is the ASSCI CODE.
 * Returns 3 Always.
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code must always be 2 digits in length */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Verifies if a char is a digit
 * @c is the Char to be evaluated
 *
 * Returns 1 if c is a digit, else 0.
 */

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - Casts a number to the specified size.
 * @num is the Number to be casted.
 * @size is the number indicating the type to be casted.
 *
 * Returns casted value of num
 */

long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - Casts a number to the specified size
 * @num is Number to be casted
 * @size is Number indicating the type to be casted
 *
 * Returns the Casted value of num
 */

long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
