#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main -entry point of the programs
* 
* Return: Always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive");
	}
	else if (n == 0)
	{
		printf("is negative");
	}
	else
		printf("is zero");
	
	return (0);
}
