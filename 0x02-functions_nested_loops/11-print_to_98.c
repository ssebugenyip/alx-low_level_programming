#include "main.h"
/**
*print_to_98 - 'function that prints all natural numbers from input to 98'
*@m: the number to be begin counting at
*/
void print_to_98(int m)
{
	if (m >= 98)
	{
		while (m > 98)
			printf("%d, ", m--);
		printf("%d\n", m);


	}
	else
	{
		while (m < 98)
			printf("%d, ", m++);
		printf("%d\m", m);


	}



}
