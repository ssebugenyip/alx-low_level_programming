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
			putchar(y);
			putchar(x);
			if (x == y)
			{
				continue;

			}
			if (x == 9 && y == 9)
			{
				break;
			}
			else
			{
			putchar(',');
			putchar(' ');
		}
		}
			y++;
	}
	}
	putchar('\n');
	return (0);
	
}
