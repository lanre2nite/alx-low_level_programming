#include <stdio.h>
/**
* main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void) /* main function*/
{
printf("Size of a char: %d bytes(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d bytes(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
