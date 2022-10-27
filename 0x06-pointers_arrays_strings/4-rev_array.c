#include "main.h"
/**
*reverse_array - program that reverses the content of an array of integers
*@a: the array of integers to reverse
*@n: the content of the array
*/

void reverse_array(int *a, int n)
{
	int tmp = 0;
	int index = 0;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;


	}


}
