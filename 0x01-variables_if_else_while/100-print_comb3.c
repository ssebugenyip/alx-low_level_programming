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

	for (x = 0; x < 9; x++)
	{
		for (y = 0; y < 9; y++)
		{
			if (x != y)
			{
			putchar((y % 10) + '0');
			putchar((x % 10) + '0');
			if (x == y)
			{
				continue;

			}
			if (x == 9 && y == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');




	return (0);
}
