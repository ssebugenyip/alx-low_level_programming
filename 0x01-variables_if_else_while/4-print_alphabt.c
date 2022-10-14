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
	char alphabet;

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++) 
	{
		if ((alphabet == 'E') || (alphabet == 'Q'))
		{
			continue;
			putchar(alphabet);

		}
		putchar(tolower(alphabet));
		alphabet++;


	}
	putchar('\n');

	return (0);

}
