#include <stdio.h>
/**
*main - start of program
*description 'program prints alphabet in reverse'
*Return: Always 0 success
*/
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;

	}
	putchar('\n');



	return (0);


}
