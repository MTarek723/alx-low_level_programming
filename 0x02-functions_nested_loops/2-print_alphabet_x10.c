#include "main.h"
/*
*print_alphabet_x10 - unction that prints 10 times the alphabet, in lowercase
*/
int a;
int b;
for (a = '0'; a <= '9'; ++a)
{
for (b = 97; b <= 122; ++b)
{
_putchar(b);
}
_putchar('\n');
}
