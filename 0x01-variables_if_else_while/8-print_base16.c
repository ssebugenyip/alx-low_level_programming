#include <stdio.h>
/**
*main - start of program
*description 'Hexadecimal'
*Return: Always 0 success
*/
int main(void)
{
	int y = 0;
	char alphabet = 'a';

	for (y = 0; y <= 9; y++)
		putchar(y);

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);



}
