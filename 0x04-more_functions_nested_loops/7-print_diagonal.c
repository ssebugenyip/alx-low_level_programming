#include "main.h"
/**
* print_diagonal - Draws a diagonal line using the \ character.
* @x: The number of \ characters to be printed.
*/
void print_diagonal(int x)
{
	int hen, spc;

	if (x > 0)
	{
		for (hen = 0; hen < x; hen++)

		{
			for (spc = 0; spc < hen; spc++)
				_putchar(' ');
			_putchar('\\');

			if (hen == x - 1)
				continue;
			_putchar('\n');







		}





	}
	_putchar('\n');









}
