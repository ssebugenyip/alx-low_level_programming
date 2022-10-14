#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
*main - start of program
*description - prints alphabet
*Return: Always 0 success
*/
int main(void)
{
	char alphabet = 'A';

	while ((alphabet = 'A') && (alphabet < 'E') && (alphabet < 'Q') && 
	(alphabet <= 'Z'))
	{
		putchar(tolower(alphabet));
		alphabet++;


	}
	putchar('\n');

	return (0);

}
