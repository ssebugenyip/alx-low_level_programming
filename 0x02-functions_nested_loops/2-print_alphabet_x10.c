#include "main.h"
/**
*print_alphabet_x10 - '_alphabet_x10'
*description 'program that prints 10times the alphabet, in lowercase, followed
*by a new line'
*/
void print_alphabet_x10(void)
{
	int count = 0;
	char letter = 'a';

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}



