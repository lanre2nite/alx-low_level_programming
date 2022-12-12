#include <stdio.h>
#include <ctype.h>
/**
*main-A c program to print alphabetic letters except letter q and e
*Return:always (0)
*/
int main(void) /*the main function*/
{
int letter; /* variable name "letter" decleration*/

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == 'q' || letter == 'e')
{
continue;
}
putchar(letter);
}
putchar('\n');
return (0); /*Always return 0 */
}
