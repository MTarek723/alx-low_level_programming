#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int x;
for (x = 48; x < 57; ++x)
{
putchar(x);
putchar(44);
putchar(32);
}
putchar(57);
return (0);
}
