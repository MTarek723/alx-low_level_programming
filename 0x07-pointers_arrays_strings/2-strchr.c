#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
int f;

f = 0;

while (s[f] > 0)
{
	if (s[f] == c)
	{
		return (&s[f]);
	}
	++f;
}
return 0;
}
