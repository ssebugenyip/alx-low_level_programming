#include "main.h"
/**
*_strncpy - program that copies a string
*@dest: the string to be copied to
*@src:the string source to be copied
*@n: the number of bytes to be copied from src
*Return: a pointer to the string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int source_length = 0;

	while (src[index++])
		source_length++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = source_length; index < n; index++)
		dest[index] = '\0';


	return (dest);
}
