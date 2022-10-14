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
	char ALPHABET = 'a';

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(tolower(alphabet));
		
	}
	for (ALPHABET = 'a'; ALPHABET <= 'Z'; ALPHABET++)
	{
		putchar(toupper(ALPHABET));

	}

	putchar('\n');

	return (0);
}

    
