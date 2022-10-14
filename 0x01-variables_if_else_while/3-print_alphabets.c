#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
*main - start of the program
*description 'program prints alphabet'
*Return: Always 0 success
*/
int main(void)
{
	char alphabet = 'A';
	char ALPHABET = 'a'

	If (alphabet <= 'Z')
	{
		putchar(tolower(alphabet));
		alphabet++;

	}
	else if (ALPHABET <= 'Z')
	{
		putchar(toupper(ALPHABET));
		ALPHABET++;

	}
	putchar('\n');

	return (0);
}

    
