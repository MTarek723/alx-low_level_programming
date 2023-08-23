#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != 0)
	{
		++x;
	}
	y = 0;
	while (src[y] != 0 && y < n)
	{
		dest[x] = src[y];
		++y;
		++x;
	}
	dest[x] = 0;
	return (dest);
}
