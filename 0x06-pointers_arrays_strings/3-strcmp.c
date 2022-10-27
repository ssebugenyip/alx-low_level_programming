#include "main.h"
/**
*_str_strcmp - program that compares two strings
*@s1: first string to be compared
*@s2: string 2 to be compared
*Return: result of the comparision of s1 and s2
*/

int _str_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == s2)
	{
		s1++;
		s2++;


	}
	return (*s1 - *s2);

}
