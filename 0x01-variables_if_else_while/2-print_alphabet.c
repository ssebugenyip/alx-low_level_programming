#include <stdio.h>
#include <ctype.h>
/**
*main - starting point
*description 'program that prints in alphabet'
*Return: Always 0 for success
*/
int main(void)
{
	char alphabet = 'A';

	while (alphabet <= 'Z')
	{
		putchar(tolower(alphabet) + '\n');
		alphabet++;

	}





	return (0);
}
