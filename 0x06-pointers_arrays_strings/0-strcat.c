#include "main.h"
/**
*_strcat - program that concatenates two strings
*@dest: the string to be appended
*@src: the source string that will be appended to dest
*Return: a pointer to dest
*/
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_length = 0;

	while (dest[index++])
		dest_length++;

	for (index = 0; src[index]; index++)
		dest[dest_length++] = src[index];

	return (dest);


}
