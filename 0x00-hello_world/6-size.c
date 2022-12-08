#include <stdio.h>
/**
* main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void) /* main function*/
{
int i;
long int ii;
long long int iii;
char c;
float f;
printf("Size of a char: %d bytes(s)\n", sizeof(c));
printf("Size of an int: %d byte(s)\n", sizeof(i));
printf("Size of a long int: %d byte(s)\n", sizeof(ii));
printf("Size of a long long int: %d bytes(s)\n", sizeof(iii));
printf("Size of a float: %d byte(s)\n", sizeof(f));
return (0);
}
