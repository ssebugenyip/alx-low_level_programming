#include <stdio.h>
/**
*main - start of program
*description 'program prints alphabet in reverse'
*Return: Always 0 success
*/
int main(void)
{
	char alphabet = 0;

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet--;

	}
	putchar('\n');



	return (0);


}
