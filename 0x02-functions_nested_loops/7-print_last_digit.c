#include "main.h"
/**
*print_last_digit - 'function that writes the last digit of a number'
*@m: digit to be printed
*Return: value of the last digit
*/
int print_last_digit(int m)
{
	int print_ld;

	print_ld = (m % 10);

	if (print_ld < 0)
	{
		print_ld = (-1 * print_ld);
	}
	_putchar(print_ld + '0');
	return (print_ld);

}
