#include <stdio.h>
#include "main.h"
/**
 * main - a function to print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argv; /*o as to ignore the argv*/
	printf("%d\n", argc - 1);
	return (0);
}
