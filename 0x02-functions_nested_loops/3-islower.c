#include "main.h"
/**
*islower - a function that checks for lowercase character
*@c is the character to be checked
*return 1 if lowercase, otherwise return 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
