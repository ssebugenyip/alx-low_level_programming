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

	for (alphabet; alphabet <= 'Z'; alphabet++) 
	{
		if ((alphabet == 'E') || (alphabet == 'Q'))
		{
			continue;

		}
		putchar(tolower(alphabet));
		alphabet++;


	}
	putchar('\n');

	return (0);

}
