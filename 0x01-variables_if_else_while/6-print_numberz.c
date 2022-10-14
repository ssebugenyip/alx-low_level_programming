#include <stdio.h>
#include <ctype.h>
/**
*main - starting point
*description 'program that prints in alphabet'
*Return: Always 0 for success
*/
int main(void)
{
	int y;

	for (y = 0; y < 10; y++)
		putchar((y % 10) + '0');
	putchar('\n');
	

	return (0);
}

