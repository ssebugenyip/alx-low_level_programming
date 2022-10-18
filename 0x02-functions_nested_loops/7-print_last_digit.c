#include "main.h"
/**
*print_last_digit - 'function that writes the last digit of a number'
*@m: digit to be printed
*Return: m for success
*/
int print_last_digit(int m)
{
	print_last_digit = (m % 10);
	if (print_last_digit < 0)
	{
		print_last_digit = (-1 * print_last_digit);
	}
	_putchar(print_last_digit + '0');
	return (print_last_digit);

}
