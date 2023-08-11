#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int x = 0, y, z;
while (x <= 7)
{
y = 0;
while (y <= 8)
{
z = 0;
while (z <= 9)
{
if (x < y &&  y < z)
{
putchar(x + 48);
putchar(y + 48);
putchar(z + 48);
if (x + y + z != 24)
{
putchar(44);
putchar(32);
}
}
++z;
}
++y;
}
++x;
}
putchar('\n');
return (0);
}
