#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 on success
 */
int main(int _attribute_((_unused_)) argc, char *argv[])
{
	printf("%s\n", *argv[0]);
	return (0);
}
