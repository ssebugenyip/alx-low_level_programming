#include "main.h"
/**
*_isalpha  - 'funtion that checks for alphabetic character'
@c:  is a letter, lowercase or uppercase
*Return: 1if c is a letter: 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);

	}
	else
		return (0);






}
