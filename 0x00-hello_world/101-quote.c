#include <stdio.h>
#include <unistd.h>
/**
* main - starting point
* Description: 'the program that prints exactly'
* Return: Always 1 (indicating Success)
*/
int main(void)
{
	write(2,
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		59);

	return (1);
}
