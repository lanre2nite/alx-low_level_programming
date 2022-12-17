#include "main.h"
/**
*_isupper - function that verifies if a  character is uppercase or not
*@c: tested character to be checked
*Return: returns 1 if it is uppercase , 0 if otherwise
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	return (0);
}
