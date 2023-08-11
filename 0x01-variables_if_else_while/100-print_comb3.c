#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int x;
int y;
x = 0;
while (x <= 9)
{
y = 0;
while (y <= 9)
{
if (y > x && x != y)
{
putchar(x + 48);
putchar(y + 48);
if (y + x != 17)
{
putchar(44);
putchar(32);
}
}
++y;
}
++x;
}
putchar('\n');
return (0);
}
