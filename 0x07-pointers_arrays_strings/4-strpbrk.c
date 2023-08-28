#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int x;
	int y = 0;

	while (s[y])
	{
		for (x = 0; accept[x] > 0; ++x)
		{
			if (s[y] == accept[x])
			{
				return (&s[y]);
			}
		}
		++y;
	}
	return (0);
}
