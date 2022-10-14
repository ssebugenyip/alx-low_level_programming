#include <stdio.h>
#include <ctype.h>
/**
*main - starting point
*description 'program that prints in alphabet'
*Return: Always 0 for success
*/
int main(void)
{
	char x;

	while ((x = 'A') && (x <= 'Z'))
	{
		putchar(tolower(x));
		x++;

	}





	return (0);
}
