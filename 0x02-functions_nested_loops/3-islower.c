#include "main.h"
/**
*_islower - 'checks for lowercase character'
*@c: character to be ckecked
*description - 'function that checks for lowercase character'
*Return: 1 for lowercase: 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}


