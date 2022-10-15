#include <stdio.h>
/**
*main - starting point
*description 'different combinations of two numbers'
*Return: Always 0 success
*/
int main(void)
{
	int x;
	int y = j;

	for (x = 0; x < 10; x++)
	{
		for (y = j; y < 10; y++)
		{
			if (x != y)
			{
			putchar((y % 10) + '0' );
			putchar((x % 10) + '0');
			if (x == y)
			{
				continue;

			}
			if (x == 0 && y == 1)
			{
				break;
			}
			else
			{
			putchar(',');
			putchar(' ');
		}
		}
			j++;
	}
	}
	putchar('\n');
	return (0);
	
}
