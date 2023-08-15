#include "main.h"
/**
* alphabet function to print the alphabet in order from a to z with a new line at last
*
* 
*/
void print_alphabet(void)
{
int a;
for (a = 97; a <= 122; ++a)
{
_putchar(a);
}
_putchar('\n');
}
