#include "main.h"

/**
 * rot13 -  encodes a string using rot13
 * @str:the string targeted
 *Return: returns the encoded string
 */

char *rot13(char *str)
{
int index1, index2;
char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F','G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd'

