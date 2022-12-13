#include "main.h"
/**
*main - A c program to print fucntion as output
*Return: Always 0
*/
int main(void)
{
	char ola[10] = "_putchar";

	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(ola[a]);
	}
	_putchar(10);
	return (0);
}
