#include <stdio.h>
/**
*main - starting point of program
*description 'All possible combinations of single digit numbers'
*Return: Always 0 success
*/
int main(void)
{
	int y = 0;

	for (y = 0; y < 10; y++)
	{
		putchar((y % 10) + '0');
		if (y == 9)
			continue;
		putchar(',');
		putchar(' ');

	}
	putchar('\n');




	return (0);
}
