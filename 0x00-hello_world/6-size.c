#include <stdio.h>
/**
* main - starting point
* Description: 'the program prints sizes of types'
* Return: Always 0 (indicating Success)
*/
int main(void)
{
	printf("Ssize of a char: %u byte(s)\n", sizeof(char));
	printf("Ssize of an int: %u byte(s)\n", sizeof(int));
	printf("Ssize of a long int: %u byte(s)\n", sizeof(long));
	printf("Ssize of a long long int: %u byte(s)\n", sizeof(long long));
	printf("Ssize of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
