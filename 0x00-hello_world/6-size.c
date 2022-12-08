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
printf("Size of a char:%lu bytes(s)\n", sizeof(c));
printf("Size of an int: %lu byte(s)\n", sizeof(i));
printf("Size of a long int:%lu byte(s)\n", sizeof(ii));
printf("Size of a long long int: %lu bytes(s)\n", sizeof(iii));
printf("Size of a float:%lu byte(s)\n", sizeof(f));
return (0);
}
