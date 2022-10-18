#include "main.h"
/**
*main - starting point of the program
* description 'function that prints alphabet in lowcase'
*Return: always (0) on success
*/
void print_alphabet_x10(void);
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
		_putchar('\n');

	}
	
}
