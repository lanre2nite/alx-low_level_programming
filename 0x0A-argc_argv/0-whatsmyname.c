#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 on success
 */
int main(int argc_attribute_((unused)) argc, char *argv[])
{
	printf("%s\n", *argv[0]);
	return (0);
}
