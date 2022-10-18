#include "main.h"
/**
*_isalpha; - 'function int __isalpha(int c);'
*description - 'funtion that checks for alphabetic character'
*Return: 1if c is a letter: 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		_isalpha(c);
		return (1);

	}
	else
		return (0);






}
