#include <stdio.h>
#include <ctype.h>
/**
*main- A c program that prints all letters in reverse order
*Return:Always 0
*/
int main(void) /*main function*/
{
int letter;/*variable decleration*/

for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}
