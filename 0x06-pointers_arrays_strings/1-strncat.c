#include "main.h"
/**
*_strncat - a program that concatenates two strings that will use at most n
*bytes from src
*@dest: the string to append on
*@src: the string to be appended to dest
*@n: the number of bytes from source to append to dest
*Return: a pointer to the string dest resulting from concatenation
*/
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_length = 0;

	while (dest[index++])
		dest_length++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_length++] = src[index];

	return (dest);
}
