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

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++) 
	{
		if ((alphabet == 'e') || (alphabet == 'q'))
		{
			continue;
			putchar(alphabet);

		}

	}
	putchar('\n');

	return (0);

}
