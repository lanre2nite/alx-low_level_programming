#include "main.h"
/**
*print_alphabet - a function to print alphabet from a to z
*main- A c program that prints the alphabet in lower case from a-z
*Return: Always 0
*/
void print_alphabet(void)/*using a print_alphabet as a function*/
{
int letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar(10);
return (0);
}
