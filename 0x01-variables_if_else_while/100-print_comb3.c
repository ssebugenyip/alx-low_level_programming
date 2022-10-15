#include <stdio.h>
/**
*main - starting point
*description 'different combinations of two numbers'
*Return: Always 0 success
*/
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 9; y++)
		{
			putchar((y % 10) + '0');
			putchar((x % 10) + '0');

			if (x == 8 && y == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');




	return (0);
}
